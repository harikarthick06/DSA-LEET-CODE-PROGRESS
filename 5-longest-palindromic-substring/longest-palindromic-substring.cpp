class Solution {
public:
    string longestPalindrome(string s) {
        string result="";
        int reslen=0;
        for(int i=0;i< s.size();i++){
            int l=i,r=i;
            
            while(l>=0 &&r<s.size() && s[l]==s[r]){
                if(reslen <r-l+1){
                    result=s.substr(l,r-l+1);
                    reslen=r-l+1;
                }
                l=l-1;
                r=r+1;
            }
            l=i,r=i+1;
            
            while(l>=0 &&r<s.size() && s[l]==s[r]){
                if(reslen <r-l+1){
                    result=s.substr(l,r-l+1);
                    reslen=r-l+1;
                }
                l=l-1;
                r=r+1;
            }
            
        }
        return result;
        
    }
};