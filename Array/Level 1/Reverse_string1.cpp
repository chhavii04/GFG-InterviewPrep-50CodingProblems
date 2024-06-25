//User function Template for C++
class Solution
{
public:
string reverseWord(string str){
    string s="";
    for(int i=str.size()-1;i>=0;i--){
        s.push_back(str[i]);
    }
    return s;
}
};
