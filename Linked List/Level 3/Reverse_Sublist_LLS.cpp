// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/
class Solution {
public:
Node* reverseBetween(int a, int b, Node* head) {
    int cnt=1;
    Node* temp=head;
    while(cnt<b){
        cnt++;
        temp=temp->next;
    }
    Node* endnode=temp->next;
    temp->next=NULL;
    cnt=1;
    temp=head;
    Node* returnnode=head;
    Node* startnode=NULL;
    while(cnt<a){
        cnt++;
        startnode=temp;
        temp=temp->next;
    }
    head=temp;
    Node* prev=NULL;
    while(temp!=NULL){
        Node* forward=temp->next;
        temp->next=prev;
        prev=temp;
        temp=forward;
    }
    if(startnode==NULL){
        head->next=endnode;
        returnnode=prev;
    }else{
        startnode->next=prev;
        head->next=endnode;
    }
    return returnnode;
}
};