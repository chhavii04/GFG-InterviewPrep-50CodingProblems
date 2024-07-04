class Solution {
public:
int setBits(int N) {
    int count=0;
    while(N!=0){
        if((N&1)==1){
            count++;
        }
        N=N/2;
    }
    return count;
}
};