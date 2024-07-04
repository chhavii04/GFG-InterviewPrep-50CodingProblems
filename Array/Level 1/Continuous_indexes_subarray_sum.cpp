class Solution {
public:
vector<int> subarraySum(vector<int> arr, int n, long long s) {
    int start=0;
    int end=0;
    long long sum=arr[0];
    while(end<n){
        while(sum>s && start<end){
            sum=sum-arr[start];
            start++;
        }
        if(sum==s){
            return {start+1,end+1};
        }
        end++;
        if(end<n){
            sum=sum+arr[end];
        }
    }
    return {-1};
    
}
};