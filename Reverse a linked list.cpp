struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head==NULL ||head->next==NULL){
            return head;
        }
        // struct Node* p=head;
        
        // if(p->next==NULL){
        //     head=p;
        // }
        // reverseList(p->next);
        // struct Node* q=p->next;
        // q->next=p;
        // p->next=NULL;
        // return head;
        struct Node* rest=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
    }
