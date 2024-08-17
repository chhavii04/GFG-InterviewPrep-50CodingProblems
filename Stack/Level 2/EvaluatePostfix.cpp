class Solution{
public:
int evaluatePostfix(string S){
    int ans=0;
    stack<int> s;
    for(int i=0;i<S.length();i++){
        int x=S[i];
        if(x>=48 && x<=57){
            s.push(S[i]);
        }else{
            int a=s.top()-'0';
            s.pop();
            int b=s.top()-'0';
            s.pop();
            if(S[i]=='+'){
                ans=a+b;
            }else if(S[i]=='-'){
                ans=b-a;
            }else if(S[i]=='*'){
                ans=b*a;
            }else{
                ans=b/a;
            }
            s.push(ans+'0');
        }
    }
    return ans;
}
};