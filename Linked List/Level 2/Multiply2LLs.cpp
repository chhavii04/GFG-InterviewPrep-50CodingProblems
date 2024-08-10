const int MOD=1000000007;
#include<math.h>
/* Linked list node structure
struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

/*The method multiplies
two  linked lists l1 and l2
and returns their product*/

/* Multiply contents of two linked lists */
class solution {
public:
int digitcount(Node* head){
    int digit=0;
    while(head!=NULL){
        int data=head->data;
        while(data){
            if(data==0){
                digit++;
            }else{
                while (data > 0) {
                    digit++;
                    data /= 10;
                }
            }
        }
        head=head->next;
    }
    return digit;
}
long long Numberlls(Node* temp,int n){
    long long sum=0;
    while(temp!=NULL){
        int data=temp->data;
        sum=(sum*10+data)%MOD;
        temp=temp->next;
    }
    return sum;
}
long long multiplyTwoLists(Node *first, Node *second) {
    int digit1=digitcount(first);
    int digit2=digitcount(second);
    long long x=(Numberlls(first,digit1)*Numberlls(second,digit2))%MOD;
    return x;
}
};