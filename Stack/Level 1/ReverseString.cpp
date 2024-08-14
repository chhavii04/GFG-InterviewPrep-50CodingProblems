char* reverse(char *S, int len)
{
    stack<char> s;
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    char* ans=new char[len+1];
    int i=0;
    while(!s.empty() && i<len){
        ans[i]=s.top();
        i++;
        s.pop();
    }
    return ans;
}