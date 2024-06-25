/* structure for a node 
struct Node
{
    int data;
    struct Node *next;
}; */

/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
    if(head==NULL){
        return;
    }
    Node* temp=head;
    do{
        cout<<head->data<<" ";
        head=head->next;
    }while(head!=temp);
}