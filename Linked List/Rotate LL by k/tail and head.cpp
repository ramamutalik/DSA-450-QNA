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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||k==0||head->next==NULL){
            return head;
        }
        ListNode*temp1=head,*temp2=head;
        int n=1;
        while(temp2->next!=NULL){
            temp1=temp2;
            temp2=temp2->next;
            n++;
        }
        
        int c=k%n;
        while(c){
            temp2->next=head;
            head=temp2;
            temp1->next=NULL;
            temp2=temp1;
            temp1=head;
            while(temp1->next!=temp2){
                temp1=temp1->next;
            }
            c--;
        }
        return head;
    }
};
