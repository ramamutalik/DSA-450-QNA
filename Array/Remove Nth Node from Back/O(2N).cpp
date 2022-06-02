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
     int getSize(ListNode * current){
       int size=0;
       while(current->next!=NULL){
           current=current->next;
           size++;
       }
       size++;
       return size;
   }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int target=getSize(head)-n+1;
        int counter=0;
        ListNode *current=head;
        ListNode *prev=NULL;
        while(current!=NULL){
                        
            if(target==1){
                cout<<head->val<<endl;
                head=head->next;
                break;
            }
            else{
            counter++;
             if(counter==target){
                 prev->next=current->next;
                  break;
            }
            prev=current;
            current=current->next;
          
           }
          
        }
        return head;
    }
};
