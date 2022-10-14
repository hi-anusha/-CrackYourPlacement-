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
        if(head->next==NULL || head==NULL)
            return NULL;
            
        struct ListNode* h=head;
        int c=0;
        while(h!=NULL)
        {
            c++;
            h=h->next;
        }
        int y=0;
        struct ListNode* temp=head;
        while(y!=(c/2)-1)
        {
            temp=temp->next;
            y++;
        }
        
        temp->next=temp->next->next;
        return head;
        
    }
};