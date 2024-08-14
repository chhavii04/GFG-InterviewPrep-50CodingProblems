class Solution {
public:
// Function to delete middle element of a stack.
void midele(stack<int>& s, int cnt,int mid,int size){
    if(cnt==mid && size%2==0){
        s.pop();
        return;
    }
    if(cnt==mid-1 && size%2!=0){
        s.pop();
        return;
    }
    int x=s.top();
    s.pop();
    midele(s,++cnt,mid,size);
    s.push(x);
}
void deleteMid(stack<int>& s, int sizeOfStack) {
    int mid=floor((sizeOfStack+1)/2);
    int cnt=0;
    midele(s,cnt,mid,sizeOfStack);
}
};