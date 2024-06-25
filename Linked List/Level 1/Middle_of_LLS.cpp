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
int length(Node* &temp){
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int getMiddle(Node *head){
    if(head==NULL || head->next==NULL){
        return head->data;
    }
    Node* temp=head;
    int n=length(temp);
    int mid=0;
    if(n%2==0){
        mid=(n/2)+1;
    }else{
        mid=(n+1)/2;
    }
    int cnt=1;
    temp=head;
    while(cnt<mid){
        temp=temp->next;
        cnt++;
    }
    return temp->data;
}
};