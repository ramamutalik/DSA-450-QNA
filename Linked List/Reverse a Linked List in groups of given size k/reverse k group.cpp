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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt=0;
        ListNode*temp=head;
        while(temp){
            cnt++;
            temp=temp->next;
        }
        int g=cnt/k;
        ListNode*dummy=new ListNode(0);
        ListNode*pre=dummy;
        dummy->next=head;
        ListNode*cur=dummy,*nex=dummy;
        while(cnt>=k){
            cur=pre->next;
            nex=cur->next;
            for(int i=1;i<k;i++){
            cur->next=nex->next;
            nex->next=pre->next;
            pre->next=nex;
            nex=cur->next;
            }
            cnt=cnt-k;
            pre=cur;
            
        }
        return dummy->next;
    }
};
