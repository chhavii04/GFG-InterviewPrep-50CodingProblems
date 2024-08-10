/* The structure of linked list is the following
struct Node
{
  int data;
  struct Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
};
*/

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution {
public:
int length(Node* head){
    Node* temp=head;
    int cnt=0;
    do{
        cnt++;
        temp=temp->next;
    }while(temp!=head);
    return cnt;
}
pair<Node *, Node *> splitList(struct Node *head) {
    int len=length(head);
    if(len%2==0){
        len=len/2;
    }else{
        len=(len/2)+1;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<len){
        cnt++;
        temp=temp->next;
    }
    Node* forward=temp->next;
    Node* head2=forward;
    temp->next=head;
    while(forward->next!=head){
        forward=forward->next;
    }
    forward->next=head2;
    return{ head,head2};
}
};