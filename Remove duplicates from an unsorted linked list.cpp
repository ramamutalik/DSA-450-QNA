Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int> m;
    Node* prev=NULL;
    Node* temp=head;
    Node* nex=head->next;
    while(nex!=NULL){
        if(!m[temp->data]){
            m[temp->data]=1;
            prev=temp;
            temp=nex;
            nex=nex->next;
        }
        else{
            prev->next=nex;
            temp=nex;
            nex=nex->next;
        }
    }
        if(m[temp->data]){
            prev->next=NULL;
        }
    return head;
    }
