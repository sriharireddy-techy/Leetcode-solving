class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            return double(nums[0]);
        }
        double avg=0;
        for(int i=0;i<k;i++){
            avg+=nums[i];
        }    
        double temp=avg;
        int start=0,end=k;
        while(end<n){
            avg=avg-nums[start];
            start++;
            avg=avg+nums[end];
            end++;
            temp=max(temp,avg);
            
        }
        return temp/k;
        
    }
};