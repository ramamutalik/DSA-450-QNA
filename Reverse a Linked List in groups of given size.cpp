 struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        struct node *nex;
        struct node *prev=NULL;
        struct node *cur=head;
        int n=0;
        while(cur!=NULL&&n<k){
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
            n++;
        }
        if(nex!=NULL){
            head->next=reverse(nex,k);
        }
        return prev;
    }
