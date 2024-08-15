class Solution {
public:
int missingNumber(int n, vector<int>& arr) {
    int total=(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    return total-sum;
}
};