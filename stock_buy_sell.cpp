//q 121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=INT_MAX , maxp=0;
        for(int i=0;i<prices.size();i++){
            bestbuy=min(bestbuy,prices[i]);
            if(prices[i]-bestbuy>maxp){
                maxp=prices[i]-bestbuy;
            }
        }
        return maxp;
    }
};
