class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minbuy=prices[0];
        int maxsell=0;
        int maxprofit=INT_MIN;

        for(int i=1;i<n;i++){
            maxsell=prices[i];
            
            int profit=maxsell-minbuy;
            maxprofit=max(maxprofit,profit);
            minbuy=min(minbuy,prices[i]);


        }
        if(maxprofit>0){
            return maxprofit;
        }else{
            return 0;
        }

    }
};