vector<int> duplicates(vector<long long> arr) {
    vector<int> v;
    unordered_map<int,bool> visited;
    for(int i=0;i<arr.size();i++){
        if(visited[arr[i]]==true){
            visited[arr[i]]=false;
            v.push_back(arr[i]);
        }
        visited[arr[i]]=true;
    }
    if(v.empty()){
        v.push_back(-1);
    }
    sort(v.begin(),v.end());
    return v;
}