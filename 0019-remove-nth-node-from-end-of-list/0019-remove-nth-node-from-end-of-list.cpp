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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode *f = head, *s= head;
        int x=0;
        while(x!=n)
        {
            f=f->next;
            x++;
        }
        if (!f) return head->next;
       // struct ListNode* s=head;
        while(f->next!=NULL)
        {
            s=s->next;
            f=f->next;
        }
        
        s->next=s->next->next;
       
        return head;
        
    }
};