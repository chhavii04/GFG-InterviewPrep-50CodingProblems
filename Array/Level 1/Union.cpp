class Solution {
public:
int doUnion(vector<int> arr1, vector<int> arr2) {
    int n=arr1.size();
    int m=arr2.size();
    unordered_map<int,bool> visited;
    int count=0;
    for(int i=0;i<n;i++){
        if(visited[arr1[i]]==false){
            count++;
        }
        visited[arr1[i]]=true;
    }
    for(int i=0;i<m;i++){
        if(visited[arr2[i]]==false){
            count++;
        }
        visited[arr2[i]]=true;
    }
    return count;
}
};