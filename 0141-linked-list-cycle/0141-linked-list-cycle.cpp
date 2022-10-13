/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        unordered_set<ListNode*> s;
        while(s.find(head)==s.end() && head!=NULL)//not found
        {
            s.insert(head);
            head=head->next;  
        }
        if(head==NULL)
            return false;
        return true;
    }
};