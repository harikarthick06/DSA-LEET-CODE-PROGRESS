class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>hash(256,-1);
        int l=0;
        int r=l;
        int maxi=0;
        while(r<s.size()){
            if(hash[s[r]]!=-1){
                if(hash[s[l]]<=hash[s[r]]){
                    l=hash[s[r]]+1;
                }
                
            }
            
            hash[s[r]]=r;
            maxi=max(r-l+1,maxi);
            r++;
            



        }
        return maxi;
        
    }
};