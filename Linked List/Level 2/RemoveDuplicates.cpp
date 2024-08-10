/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
public:
//Function to remove duplicates from unsorted linked list.
Node * removeDuplicates( Node *head) 
{
    unordered_map<int,bool> visited;
    Node* temp=head;
    Node* prev=NULL;
    temp=head;
    while(temp!=NULL){
        if(visited[temp->data]==true){
            if(temp==head){
                prev=temp;
                temp=temp->next;
            }else{
                prev->next=temp->next;
                temp=temp->next;
            }
        }else{
            visited[temp->data]=true;
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}
};