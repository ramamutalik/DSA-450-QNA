void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* low=head;
        Node* high=head;
        while(low!=NULL&&high!=NULL&&high->next!=NULL){
            high=high->next->next;
            low=low->next;
            if(low==high){
                break;
            }
        }
        if(low==high&&high==head){
            while(high->next!=low)
            high=high->next;
            high->next=NULL;
            return;
        }
        low=head;
        if(low==high){
            while(low->next!=high->next){
                // break;
            low=low->next;
            high=high->next;
            }
        }
        high->next=NULL;
        return;
    }
