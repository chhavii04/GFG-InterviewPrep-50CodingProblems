/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution{
public:
Node* deleteMid(Node* head){
    if(head==NULL || head->next==NULL){
        delete head;
        return NULL;
    }
    Node* slow=head;
    Node* slowprev=NULL;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slowprev=slow;
        slow=slow->next;
    }
    Node* midnext=slow->next;
    slowprev->next=midnext;
    slow->next=NULL;
    delete slow;
    return head;
}
};