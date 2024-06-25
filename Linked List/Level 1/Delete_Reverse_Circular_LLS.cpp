/* structure for a node 
struct Node
{
	int data;
	struct Node *next;
};
*/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{
    if((*head)->data==key){
        struct Node* prev=(*head)->next;
        struct Node* curr=(*head);
        while(prev->next!=curr){
            prev=prev->next;
        }
        (*head)=(*head)->next;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }else{
        struct Node* curr=(*head)->next;
        struct Node* prev=(*head);
        while(curr->data!=key){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    struct Node* curr=(*head_ref)->next;
    struct Node* prev=(*head_ref);
    struct Node* forward=NULL;
    do{
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }while(curr!=*head_ref);
    (*head_ref)->next = prev;
    *head_ref = prev; 
}