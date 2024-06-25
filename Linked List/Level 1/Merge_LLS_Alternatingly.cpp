/*
structure of the node of the linked list is
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
// complete this function
void mergeList(struct Node **p, struct Node **q)
{
    struct Node* curr1=*p;
    struct Node* curr2=*q;
    struct Node* forward1=NULL;
    struct Node* forward2=NULL;
    while(curr1!=NULL && curr2!=NULL){
        forward1=curr1->next;
        forward2=curr2->next;
        curr1->next=curr2;
        curr2->next=forward1;
        curr1=forward1;
        curr2=forward2;
    }
    *q = curr2;
}