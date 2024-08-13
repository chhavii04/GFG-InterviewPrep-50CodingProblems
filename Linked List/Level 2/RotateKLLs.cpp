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
// Function to rotate a linked list.
Node* rotate(Node* head, int k) {
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    int cnt=0;
    Node* nextpt=head;
    while(cnt<k-1){
        cnt++;
        nextpt=nextpt->next;
    }
    temp->next=head;
    head=nextpt->next;
    nextpt->next=NULL;
    return head;
}
};