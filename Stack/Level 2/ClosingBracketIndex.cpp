class Solution
{
public:
int closing (string s, int pos){
    stack<int> st;
	for(int i=0;i<s.length();i++){
	    if(s[i]=='['){
	        st.push(i);
	    }else if(s[i]==']'){
	        if(!st.empty() && st.top()==pos){
	            return i;
	        }else{
	            st.pop();
	        }
	    }
	}
}
};