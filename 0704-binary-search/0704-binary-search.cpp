class Solution {
public:
    
    int findindex(vector<int>& nums,int target,int lower,int upper){
        if(lower>upper){
            return -1;
        }
        int m=(lower+upper)/2;
        if(nums[m]==target){
            // cout<<m;
            return m;
            
        }
        if(nums[m]<target){
            return findindex(nums,target,m+1,upper);
        }else{
            return findindex(nums,target,lower,m-1);

        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l=nums.size();
        int index=findindex(nums,target,0,l-1);
        return index;
    }
};