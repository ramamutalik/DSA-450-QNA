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
    ListNode *detectCycle(ListNode *head) {
        ListNode*f=head,*s=head;
        if(s==NULL){
            return NULL;
        }
        do{
            s=s->next;
            if(f->next==NULL){
                return NULL;
            }
            f=f->next->next;
        }while(s!=f&&f!=NULL);
        if(f==NULL)
            return NULL;
        f=head;
        while(s!=f){
            s=s->next;
            f=f->next;
        }
        return s;
    }
};
