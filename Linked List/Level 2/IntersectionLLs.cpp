/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
public:
Node* findIntersection(Node* head1, Node* head2){
    Node* temp=new Node(-1);
    Node* head=temp;
    Node* temp1=head1;
    Node* temp2=head2;
    unordered_map<int,int>visited;
    while(temp1!=NULL){
        visited[temp1->data]++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        if(visited[temp2->data]>0){
            visited[temp2->data]--;
            Node* n=new Node(temp2->data);
            Node* prev=temp;
            temp->next=n;
            temp=n;
        }
        temp2=temp2->next;
    }
    head=head->next;
    return head;
}
};