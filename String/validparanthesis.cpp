class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='{' || s[i]== '(' || s[i]=='['){
                st.push(s[i]);
            }
            else {
                if(st.empty()){
                    return false;
                }
                char x = st.top();
                st.pop();
                if((x=='[' && s[i]==']') || (x=='{' && s[i]=='}') || (x=='(' && s[i]==')') ){
                    continue;
                }
                else{
                    return false;
                }
                
            }
        }
        return st.empty()?true:false;
    }
};