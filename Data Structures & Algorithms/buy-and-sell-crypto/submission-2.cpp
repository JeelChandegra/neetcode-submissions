class Solution {
public:
    int maxProfit(vector<int>& prices) {
        long long min = prices[0];
        int mx=0;
        for(auto i:prices){
            if(min>i) min=i;
            int profit = i-min;
            mx=max(mx,profit);

        }
        return mx;
    }
};
