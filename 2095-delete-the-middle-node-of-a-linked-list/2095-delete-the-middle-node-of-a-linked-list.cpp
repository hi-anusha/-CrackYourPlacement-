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
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)
            return NULL;
        struct ListNode* s=head;
        struct ListNode* f=head->next->next;
        struct ListNode* temp=NULL;
        
        while(f && f->next)
        {
          //  temp=s;
            s=s->next;
            f=f->next->next;
        }
        
        s->next=s->next->next;
        
        return head;
    }
};