class Solution {
public:
vector<int> rightsmaller(vector<int> &arr,int n){
    stack<int> s;
    vector<int> right(n);
    s.push(0);
    for(int i=n-1;i>=0;i--){
        int num=arr[i];
        while(s.top()>=num){
            s.pop();
        }
        right[i]=s.top();
        s.push(num);
    }
    return right;
}
vector<int> leftsmaller(vector<int> &arr,int n){
    stack<int> s;
    vector<int> left(n);
    s.push(0);
    for(int i=0;i<n;i++){
        int num=arr[i];
        while(s.top()>=num){
            s.pop();
        }
        left[i]=s.top();
        s.push(num);
    }
    return left;
}
int findMaxDiff(vector<int> &arr) {
    int n=arr.size();
    vector<int> left(n);
    vector<int> right(n);
    left=leftsmaller(arr,n);
    right=rightsmaller(arr,n);
    int maxi=0;
    for(int i=0;i<n;i++){
        int val=abs(left[i]-right[i]);
        maxi=max(maxi,val);
    }
    return maxi;
}
};