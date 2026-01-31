class Solution {
public:
    string minWindow(string s, string t) {
        vector<int>hash(256);
        for(auto c:t){
            hash[c]++;
        }
        int l=0;
        int r=l;
        int count=0;
        int minlen=INT_MAX;
        int startindex=-1;
        while(r<s.size()){
            if(hash[s[r]]>0){
                count++;
            }

            hash[s[r]]--;
            r++;
            while(count==t.size()){
                if (r - l < minlen) {
                    minlen = r - l;
                    startindex = l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0){
                    count--;
                }
                l++;
            }
        }
        if (startindex == -1) return "";
        return s.substr(startindex, minlen);
        
    }
};