/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
public:
bool detectLoop(Node* head){
    if(head==NULL || head->next==NULL){
        return false;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        if(slow==fast){
            return true;
        }
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return false;
}
};