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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1,*t2=l2,*prev=NULL,*head=NULL;
        if(t1==NULL){
            return l2;
        }
        if(t2==NULL){
            return l1;
        }
        
        while(t1!=NULL&&t2!=NULL){
            if(t1->val<=t2->val){
                if(prev==NULL){
                    prev=t1;
                    head=prev;
                    t1=t1->next;
                }else{
                
                prev->next=t1;
                t1=t1->next;
                prev=prev->next;
                }
            }
            else{
                if(prev==NULL){
                    prev=t2;
                    head=prev;
                    t2=t2->next;
                }else{
                prev->next=t2;
                t2=t2->next;
                prev=prev->next;
                }
            }
        }
        while(t1!=NULL){
            if(prev==NULL){
                prev=t1;
                t1=t1->next;
                 head=prev;
            }else{
            prev->next=t1;
            t1=t1->next;
            prev=prev->next;
               
            }
        }
        while(t2!=NULL){
            if(prev==NULL){
                prev=t2;
                t2=t2->next;
                head=prev;
            }else{
            prev->next=t2;
            t2=t2->next;
            prev=prev->next;
            }
        }
        return head;
    }
};
