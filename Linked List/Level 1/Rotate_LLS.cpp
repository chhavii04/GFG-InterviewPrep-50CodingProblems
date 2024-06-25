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
    int n=length(head);
    Node* tail=head;
    int cnt=1;
    while(cnt<n){
        tail=tail->next;
        cnt++;
    }
    Node* knode=head;
    int ct=1;
    while(ct<k){
        knode=knode->next;
        ct++;
    }
    tail->next=head;
    Node* forward=knode->next;
    knode->next=NULL;
    return forward;
}
};