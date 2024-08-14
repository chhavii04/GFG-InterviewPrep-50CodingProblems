class Solution{
public:
vector<int> leftSmaller(int n, int a[]){
    vector<int> v(n);
    stack<int> s;
    s.push(-1);
    for(int i=0;i<n;i++){
        int num=a[i];
        while(s.top()>=num){
            s.pop();
        }
        v[i]=s.top();
        s.push(num);
    }
    return v;
}
};