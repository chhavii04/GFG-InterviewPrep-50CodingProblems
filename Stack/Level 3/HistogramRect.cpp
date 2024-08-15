class Solution
{
public:
vector<long long> prevsmaller(long long arr[], int n){
    stack<long long> s;
    vector<long long> v(n);
    s.push(-1);
    for(int i=0;i<n;i++){
        long long num=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=num){
            s.pop();
        }
        v[i]=s.top();
        s.push(i);
    }
    return v;
}
vector<long long> nextsmaller(long long arr[], int n){
    stack<long long> s;
    vector<long long> v(n);
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        long long num=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=num){
            s.pop();
        }
        v[i]=s.top();
        s.push(i);
    }
    return v;
}
long long getMaxArea(long long arr[], int n){
    vector<long long> prev(n);
    vector<long long> next(n);
    prev=prevsmaller(arr,n);
    next=nextsmaller(arr,n);
    long long maxarea=0;
    for(int i=0;i<n;i++){
        long long l=arr[i];
        if(next[i]==-1){
            next[i]=n;
        }
        long long b=next[i]-prev[i]-1;
        long long area=l*b;
        maxarea=max(area,maxarea);
    }
    return maxarea;
}
};