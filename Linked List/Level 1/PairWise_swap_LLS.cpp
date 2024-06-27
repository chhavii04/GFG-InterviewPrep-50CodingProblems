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
void swap(struct Node* curr,struct Node* forward, struct Node* newnext){
    if(forward==NULL){
        newnext->next=curr;
        curr->next=NULL;
        return;
    }
    if(forward->next==NULL){
        newnext->next=curr;
        curr->next=forward;
        return;
    }
    newnext->next=curr;
    curr->next=forward->next;
    return swap(forward,curr->next->next,curr->next);
}
Node* pairWiseSwap(struct Node* head){
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct Node* curr=head;
    struct Node* forward=curr->next->next;
    struct Node* newnext=curr->next;
    head=newnext;
    swap(curr,forward,newnext);
    return head;
}
};