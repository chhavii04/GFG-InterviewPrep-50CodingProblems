/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> Arr, int X){
    int cnt=0;
    for(int i=0;i<Arr.size();i++){
        if(Arr[i]==X){
            cnt++;
        }
    }
    return cnt;
}