class Solution{
public:
void segregateElements(int arr[],int n)
{
    vector<int> positive;
    vector<int> negative;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            positive.push_back(arr[i]);
        }else{
            negative.push_back(arr[i]);
        }
    }
    for(int i=0;i<positive.size();i++){
        arr[i]=positive[i];
    }
    int j=0;
    for(int i=positive.size();i<n;i++){
        arr[i]=negative[j];
        j++;
    }
}
};