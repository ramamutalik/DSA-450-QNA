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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head,*temp2=head;
        int t=0;
        while(temp2!=NULL){
            t++;
            temp2=temp2->next;
        }
        t=(t/2)+1;
        while(t!=1){
            temp=temp->next;
            t--;
        }
        return temp;
    }
};
