/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        Node* temp1=head1;
        Node* temp2=head2;
        unordered_map<Node*,bool> visited;
        while(temp1!=NULL){
            visited[temp1]=true;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            if(visited[temp2]==true){
                return temp2->data;
            }
            temp2=temp2->next;
        }
    }
};