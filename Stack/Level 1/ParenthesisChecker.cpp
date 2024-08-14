class Solution
{
public:
bool ispar(string x){
    stack<char> s;
    for(int i=0;i<x.length();i++){
        if((x[i]=='(') || (x[i]=='{') || (x[i]=='[')){
            s.push(x[i]);
        }else{
            if(s.empty()) return false;
            char top=s.top();
            s.pop();
            if((x[i]==')' && top!='(') || (x[i]=='}' && top!='{') || (x[i]==']' && top!='[')){
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }else{
        return false;
    }
}

};