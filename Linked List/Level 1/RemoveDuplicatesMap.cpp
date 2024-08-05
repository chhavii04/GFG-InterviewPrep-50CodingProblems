/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head){
    Node* temp=head;
    Node* prev=NULL;
    unordered_map<int,bool> visited;
    while(temp!=NULL){
        if(visited[temp->data]==true){
            Node* deletenode=temp;
            temp=temp->next;
            prev->next=temp;
            deletenode->next=NULL;
            delete deletenode;
        }else{
            visited[temp->data]=true;
            prev=temp;
            temp=temp->next;
        }
    }
    return head;
}