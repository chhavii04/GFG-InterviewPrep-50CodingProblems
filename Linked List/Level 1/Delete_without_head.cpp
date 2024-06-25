/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/


class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
        Node* curr=del_node;
        Node* prev=NULL;
        while(curr->next!=NULL){
            prev=curr;
            curr->data=curr->next->data;
            curr=curr->next;
        }
        prev->next=NULL;
        delete curr;
    }

};