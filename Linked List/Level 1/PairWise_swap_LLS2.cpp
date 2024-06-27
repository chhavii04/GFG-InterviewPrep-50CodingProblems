/*
  Pairwise swap a linked list
  The input list will have at least one element
  node is defined as

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}*head;
*/
class Solution
{
public:
Node* pairWiseSwap(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct Node* prev=head;
    struct Node* curr=head->next;
    head=curr;
    while(curr->next!=NULL){
        swap(curr->data,prev->data);
        prev=curr->next;
        curr=prev->next;
    }
    return head;
}
};