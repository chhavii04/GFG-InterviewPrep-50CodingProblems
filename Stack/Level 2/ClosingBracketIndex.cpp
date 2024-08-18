int closing (string s, int pos){
    stack<int> st;
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]=i;
    }
    for(auto it: mp){
        cout<<it.first<<" : "<<it.second<<endl;
    }
	for(int i=0;i<s.length();i++){
	    if(s[i]=='['){
	        st.push(s[i]);
	    }else if(s[i]==']'){
	        if(!st.empty() && st.top()=='[' && mp[s[i]]==pos){
	            return i;
	        }else if(!st.empty() && st.top()=='['){
	            st.pop();
	        }
	    }
	}
}