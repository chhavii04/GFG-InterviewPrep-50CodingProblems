class Solution{
public:
void insert(stack<int> &St,int top){
    if(St.empty()){
        St.push(top);
        return;
    }
    int x=St.top();
    St.pop();
    insert(St,top);
    St.push(x);
}
void Reverse(stack<int> &St){
    if(St.empty()){
        return;
    }
    int top=St.top();
    St.pop();
    Reverse(St);
    insert(St,top);
}
};