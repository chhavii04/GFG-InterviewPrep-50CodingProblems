/* Link list Node
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

/* Should return true if linked list is circular, else false */
class Solution {
public:
bool circular(Node* head,Node* temp){
    if(temp->next==NULL){
        return false;
    }
    if(temp->next==head){
        return true;
    }
    temp=temp->next;
    return circular(head,temp);
}
bool isCircular(Node *head) {
    if(head==NULL){
        return true;
    }
    Node* temp=head;
    return circular(head,temp);
}
};