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
        ListNode *t= new ListNode(0);
        ListNode*h=t;
        h->next=head;
        // cout<<h->val<<" "<<h->next->val<<" ";
        ListNode *s=h,*f=h;
        // cout<<f->val<<" "<<f->next->val<<" ";
        int m=n;
        while(m>0){
            f=f->next;
            m--;
        }
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return t->next;
    }
};
