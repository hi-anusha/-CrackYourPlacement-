/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
        struct ListNode* p=head;
        int x=0;
        int y=0;
        while(p!=NULL)
        {
            p=p->next;
            x++;
        }
        while(head && head->next && y!=ceil(x/2))
        {
            head=head->next;
            y++;
        } 
        return head;
    }
};