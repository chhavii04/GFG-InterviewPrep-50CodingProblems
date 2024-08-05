/*
structure of the node of the linked list is
struct Node
{
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
// Function to merge two linked lists
class Solution {
public:
vector<Node *> mergeList(struct Node **head1, struct Node **head2) {
    vector<Node*> v;
    Node* temp1=*head1;
    Node* temp2=*head2;
    Node* forward1=NULL;
    Node* forward2=NULL;
    while(temp1!=NULL && temp2!=NULL){
        forward1=temp1->next;
        forward2=temp2->next;
        temp1->next=temp2;
        temp2->next=forward1;
        temp1=forward1;
        temp2=forward2;
    }
    if(temp1!=NULL){
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp2;
    }
    if(temp2==NULL){
        *head2 = NULL;
    }else{
        *head2=temp2;
    }
    v.push_back(*head1);
    v.push_back(*head2);
    return v;
}
};