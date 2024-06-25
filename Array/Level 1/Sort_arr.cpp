class Solution{
public:
vector<int> sortArr(vector<int>arr, int n) { 
    int temp;
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }  
        }
    }
    return arr;
}
};