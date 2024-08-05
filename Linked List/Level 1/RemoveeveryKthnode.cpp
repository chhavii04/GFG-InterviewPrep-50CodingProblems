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

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */

class Solution {
public:
void Kdelete(Node *temp,Node *prev,int K){
    if(temp==NULL || temp->next==NULL){
        return;
    }
    int cnt=1;
    while(cnt<K && temp!=NULL){
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    if(temp!=NULL){
        Node* del=temp;
        temp=temp->next;
        prev->next=temp;
        del->next=NULL;
        delete del;
    }
    return Kdelete(temp,prev,K);
}
Node* deleteK(Node *head,int K){
    if (head == NULL || K==1) {
        return NULL;
    }
    Node* temp=head;
    Node* prev=NULL;
    Kdelete(temp,prev,K);
    return head;
}
};