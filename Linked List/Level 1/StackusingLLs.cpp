class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        StackNode* temp=new StackNode(x);
        temp->next=top;
        top=temp;
    }

    int pop() {
        if(top==NULL){
            return -1;
        }else{
            StackNode* temp=top;
            int ele=temp->data;
            top=temp->next;
            delete temp;
            return ele;
        }
    }

    MyStack() { top = NULL; }
};