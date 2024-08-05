/*
delete n nodes after m nodes
  The input list will have at least one element
  Node is defined as

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
class Solution {
public:
void deletelink(Node* temp,Node* prev,int n,int m){
    if (temp == NULL) {
        return;
    }
    int cnt=1;
    while(cnt<=m && temp!=NULL){
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    if (temp == NULL) {
        return;
    }
    int del=1;
    while(del<=n && temp!=NULL){
        Node* deletenode=temp;
        del++;
        temp=temp->next;
        prev->next=temp;
        deletenode->next=NULL;
        delete deletenode;
    }
    deletelink(temp,prev,n,m);
}
void linkdelete(struct Node **head, int n, int m) {
    Node* temp=*head;
    Node* prev=NULL;
    deletelink(temp,prev,n,m);
}
};