//User function Template for C++
class Solution
{
public:
string reverseWord(string str){
    int j=str.length()-1;
    int i=0;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
    return str;
}
};