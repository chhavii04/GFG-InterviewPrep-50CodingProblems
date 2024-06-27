#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertintotail(node* &head,node* &tail,int data){
    node* temp=new node(data);
    if(head==NULL){
        head=temp;
        tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
void deletelastocc(node* head,int x){
    node* temp=head;
    node* last=NULL;
    while(temp!=NULL){
        if(temp->data==x){
            last=temp;
        }
        temp=temp->next;
    }
    if(last != NULL && last == head){
        head = head->next;
        delete last;
    }else{
        node* prev=head;
        while(prev->next!=last){
            prev=prev->next;
        }
        prev->next=last->next;
        last->next=NULL;
        delete last;
    }
}
int main(){
    node* head=NULL;
    node* tail=NULL;
    insertintotail(head,tail,1);
    insertintotail(head,tail,2);
    insertintotail(head,tail,3);
    insertintotail(head,tail,5);
    insertintotail(head,tail,2);
    insertintotail(head,tail,10);
    print(head);
    int x=2;
    deletelastocc(head,x);
    print(head);
}