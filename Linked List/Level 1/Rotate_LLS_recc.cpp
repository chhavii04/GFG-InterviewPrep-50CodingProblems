/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
public:
int length(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
Node* rotate(Node* head, int k){
    if(k==0){
        return head;
    }
    int n=length(head);
    Node* tail=head;
    int cnt=1;
    while(cnt<n){
        tail=tail->next;
        cnt++;
    }
    Node* temp=head;
    Node* forward=temp->next;
    tail->next=temp;
    temp->next=NULL;
    return rotate(forward,--k);
}
};