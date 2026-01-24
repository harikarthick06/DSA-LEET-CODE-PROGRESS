class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>a(n+1,0);
        for(int i=0;i<=n;i++)
        {
            int ans=0;
            int x=i;
            while(x!=0){
                ans=ans+1;
                x=x &(x-1);



            }
            a[i]=ans;
        }
        return a;
        
    }
};