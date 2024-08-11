class Solution{
public:
vector<int> findTwoElement(vector<int> arr, int n) {
    vector<int> v;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    int repeating=-1;
    int missing=-1;
    for(int i=1;i<=n;i++){
        if(mp[i]==2){
            repeating=i;
        }
        else if(mp[i]==0){
            missing=i;
        }
    }
    v.push_back(repeating);
    v.push_back(missing);
    return v;
}
};