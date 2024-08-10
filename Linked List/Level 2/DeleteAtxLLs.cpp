/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    if(x==1){
        return head->next;
    }
    int cnt=1;
    Node* temp=head;
    Node* deletenode=NULL;
    Node* prev=NULL;
    while(temp!=NULL && cnt<x){
        cnt++;
        prev=temp;
        deletenode=temp->next;
        temp=temp->next;
    }
    prev->next=deletenode->next;
    deletenode->next=NULL;
    return head;
}