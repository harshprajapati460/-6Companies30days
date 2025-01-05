Node* linkdelete(Node* head, int n, int m) {
        Node *temp = head;
        
        while(temp != nullptr){
    
            int size = m;
            while(size > 1 && temp != nullptr){
                temp = temp->next;
                size--;
            }
            size = n;
            if(temp == nullptr) return head;
            
            Node *temp2 = temp->next;
            while(size > 0 && temp2 != nullptr){
                Node *del = temp2;
                temp2 = temp2->next;
                delete(del);
                size--;
            }
            temp->next = temp2;
            temp = temp2;
        }
        return head;
        // code here
    }