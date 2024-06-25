class Solution {
public:
long long minimum(long long a[], int n){
    long long min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<=min){
            min=a[i];
        }
    }
    return min;
}
long long maximum(long long a[], int n){
    long long max=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>=max){
            max=a[i];
        }
    }
    return max;
}
pair<long long, long long> getMinMax(long long a[], int n) {
    long long min=minimum(a,n);
    long long max=maximum(a,n);
    return {min,max};
}
};