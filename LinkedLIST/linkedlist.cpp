#include <iostream>

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void InsertAtTail(node *&head, int val)
{
    
    node *n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }
//Traversal Algorithm In linked List
    void display(head){
       while (head!=NULL)
       {
        cout<<head->data<<" ";
        head=head->next;
       }
       
        cout<<endl;
        
    }

    node* temp = head;
    while (temp->next != NULL)
    { 
        temp = temp->next;
    }
    temp->next = n;
}

int main(){
    node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
     display(head);
    return 0;
}