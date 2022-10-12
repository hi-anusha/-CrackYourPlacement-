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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        struct ListNode* d=head;
        struct ListNode* temp=head;
        int x=0;
        while(d!=NULL)
        {
            d=d->next;
            x++;
        }
        if(x==1)
        {
            delete(head);
            return NULL;
        }
        
        int z=(x-n);
        struct ListNode* dd=head;
        
         if(x == n){
            head = head->next;
            return head;
        }

        
        x=0;
        
      
        while(x!=z)
        {
            dd=temp;
            temp=temp->next;
            x++;
        }
        
        dd->next = temp->next;
        delete(temp); 
        
        
        
        return head;
        
    }
};