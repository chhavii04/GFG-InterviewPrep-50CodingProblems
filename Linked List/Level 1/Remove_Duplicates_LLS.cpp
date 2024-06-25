/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
    if(head==NULL && head->next==NULL){
        return head;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        if(curr->data==curr->next->data){
            delete curr->next;
            curr->next=curr->next->next;
        }else{
            curr=curr->next;
        }
    }
    return head;
    
}