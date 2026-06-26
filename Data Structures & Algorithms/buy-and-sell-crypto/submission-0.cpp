class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long n = prices.size() , max = 0; 
        for( int l = 0 , r = 0 ; r < n ; r++ ){
            while(l < r && prices[l] > prices[r]) l++;
            max = max < prices[r] - prices[l] ? prices[r] - prices[l] : max ;
        }
        return max;
    }
};
