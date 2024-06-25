/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
class Solution
{
public:
Node* reverseDLL(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* curr=head;
    Node* pre=NULL;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=pre;
        curr->prev=forward;
        pre=curr;
        curr=forward;
    }
    return pre;
}
};