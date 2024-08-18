class Solution{
public:
void insert(stack<int> &s,int top){
    if(s.empty()){
        s.push(top);
        return;
    }
    int x=s.top();
    s.pop();
    insert(s,top);
    s.push(x);
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