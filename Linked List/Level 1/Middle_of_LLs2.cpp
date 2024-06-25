/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
public:
int getMiddle(Node *head){
    if(head==NULL || head->next==NULL){
        return head->data;
    }
    Node *slow=head;
    Node *fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow->data;
}
};