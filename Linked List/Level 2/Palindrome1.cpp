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

class Solution {
public:
int length(Node *head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool isPalindrome(Node *head) {
    int len=length(head);
    Node* temp=head;
    int n=0;
    if(len%2==0){
        n=len/2;
    }else{
        n=(len+1)/2;
    }
    int cnt=1;
    while(cnt<n){
        cnt++;
        temp=temp->next;
    }
    Node* othernode=temp->next;
    temp->next=NULL;
    Node* rev=reverse(othernode);
    while(rev!=NULL && head!=NULL){
        if(rev->data!=head->data){
            return false;
        }
        rev=rev->next;
        head=head->next;
    }
    return true;
}
};