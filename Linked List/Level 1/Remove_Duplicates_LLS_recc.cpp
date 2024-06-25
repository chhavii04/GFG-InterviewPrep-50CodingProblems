/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/
Node* remove(Node* &head,Node* &curr,Node* &prev,Node* &forward){
    if(curr==NULL){
        return head;
    }
    forward=curr->next;
    if(curr->data==prev->data){
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        curr=forward;
    }else{
        curr=curr->next;
        prev=prev->next;
    }
    return remove(head,curr,prev,forward);
}
Node *removeDuplicates(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev=head;
    Node* curr=head->next;
    Node* forward=NULL;
    return remove(head,curr,prev,forward);
}