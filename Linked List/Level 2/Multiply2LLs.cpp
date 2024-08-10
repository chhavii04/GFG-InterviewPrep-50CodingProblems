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
const int MOD=1e9+7;
class solution {
public:
long long multiplyNum(Node* temp){
    long long sum=0;
    while(temp!=NULL){
        int data=temp->data;
        sum=(sum*10+data)%MOD;
        temp=temp->next;
    }
    return sum;
}
long long multiplyTwoLists(Node *first, Node *second) {
    return (multiplyNum(first)*multiplyNum(second))%MOD;
}
};
