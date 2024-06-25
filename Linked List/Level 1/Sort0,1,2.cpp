/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
public:
//Function to sort a linked list of 0s, 1s and 2s.
Node* segregate(Node *head) {
    int zeros=0;
    int ones=0;
    int twos=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zeros++;
        }
        else if(temp->data==1){
            ones++;
        }else{
            twos++;
        }
        temp=temp->next;
    }
    temp=head;
    while(zeros>0){
        temp->data=0;
        temp=temp->next;
        zeros--;
    }
    while(ones>0){
        temp->data=1;
        temp=temp->next;
        ones--;
    }
    while(twos>0){
        temp->data=2;
        temp=temp->next;
        twos--;
    }
    return head;
}
};