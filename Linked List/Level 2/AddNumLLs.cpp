/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
public:
Node* reverse(Node* head){
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        Node* forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
Node* addTwoLists(struct Node* num1, struct Node* num2) {
    if(num1==NULL){
        return num2;
    }
    if(num2==NULL){
        return num1;
    }
    num1=reverse(num1);
    num2=reverse(num2);
    Node* temp1=num1;
    Node* temp2=num2;
    Node* temp=new Node(-1);
    Node* head=temp;
    int carry=0;
    while(temp1!=NULL && temp2!=NULL){
        int sum=temp1->data + temp2->data+carry;
        int s=sum%10;
        Node* prev=temp;
        temp=new Node(s);
        prev->next=temp;
        carry=sum/10;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1!=NULL){
        int sum=temp1->data+carry;
        int s=sum%10;
        Node* prev=temp;
        temp=new Node(s);
        prev->next=temp;
        carry=sum/10;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        int sum=temp2->data+carry;
        int s=sum%10;
        Node* prev=temp;
        temp=new Node(s);
        prev->next=temp;
        carry=sum/10;
        temp2=temp2->next;
    }
    if(carry!=0){
        Node* prev=temp;
        temp=new Node(carry);
        prev->next=temp;
    }
    head=head->next;
    return reverse(head);
}
};