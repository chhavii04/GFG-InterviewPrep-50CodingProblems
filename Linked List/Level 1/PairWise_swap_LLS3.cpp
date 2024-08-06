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
Node* pairWiseSwap(struct Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=head;
    Node* curr=head->next;
    head=curr;
    while(curr->next!=NULL && curr->next->next!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        prev->next=forward->next;
        prev=forward;
        curr=forward->next;
    }
    if(curr->next==NULL){
        curr->next=prev;
        prev->next=NULL;
        return head;
    }
    if(curr->next->next==NULL){
        Node* newnode=curr->next;
        curr->next=prev;
        prev->next=newnode;
    }
    return head;
}
};