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
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<x){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    return head;
}
