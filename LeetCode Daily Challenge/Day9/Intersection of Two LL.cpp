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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode * t1=headA,*t2=headB;
        
        while(t1!=NULL){
            // cout<<t1->val<<" ";
            while(t2!=NULL){
                // cout<<t2->val<<" ";
            if(t1==t2){
                return t1;
            }
            t2=t2->next;
            }
            t2=headB;
            t1=t1->next;
        }
        return NULL;
    }
};
