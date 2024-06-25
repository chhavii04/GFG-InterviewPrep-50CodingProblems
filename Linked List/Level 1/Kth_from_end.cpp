/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
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
int getKthFromLast(Node *head, int k) {
    int n=length(head);
    if(k>n){
        return -1;
    }
    int cnt=0;
    Node* temp=head;
    while(cnt<(n-k)){
        temp=temp->next;
        cnt++;
    }
    return temp->data;
}
};