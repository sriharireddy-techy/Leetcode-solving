class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max=0;
        int j=0;
        for(int i=1;i<prices.size();i++){
            if(prices[j]<=prices[i]){    
                int dif=abs(prices[i]-prices[j]);
                if(dif>max){
                    max=dif;
                }


            }else{
                j=i;
            }
        }
        return max;

    }
};