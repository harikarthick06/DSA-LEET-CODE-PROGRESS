class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int r=0;
        while(r<s.size()){
            if(s[r]=='(' || s[r]=='{' ||s[r]=='['){
                st.push(s[r]);
            }


            else{
                if(st.empty())
                {
                    return false;
                }
                char key=st.top();
                if(key=='('&& s[r]==')' ||key=='{'&& s[r]=='}' ||key=='['&& s[r]==']'){
                    st.pop();

                }
                else{
                    return false;
                }
                
            }
            r++;
        }
        return st.empty();
        
    }
};