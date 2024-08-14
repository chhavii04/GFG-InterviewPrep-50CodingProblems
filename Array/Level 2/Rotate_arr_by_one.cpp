class Solution {
public:
void rotate(vector<int> &arr) {
    for(int i=arr.size()-1;i>0;i--){
        swap(arr[i],arr[i-1]);
    }
}
};