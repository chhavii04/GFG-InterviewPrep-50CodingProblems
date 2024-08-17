class Solution
{
public:
vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long> s;
    s.push(-1);
    vector<long long> v(n);
    for(int i=n-1;i>=0;i--){
        long long num=arr[i];
        while(s.top()!=-1 && s.top()<=num){
            s.pop();
        }
        v[i]=s.top();
        s.push(num);
    }
    return v;
}
};