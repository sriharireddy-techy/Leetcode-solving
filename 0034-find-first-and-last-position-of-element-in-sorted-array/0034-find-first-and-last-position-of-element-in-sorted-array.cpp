class Solution {
public:
    int lowerbound(vector<int>& nums, int target,int n){
        int l=0,h=n-1;
        int index=n;
        while(l<=h){
            int m=l+(h-l)/2;
            if(nums[m]>=target){
                index=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return index;
    }

    int upperbound(vector<int>& nums, int target,int n){
        int l=0,h=n-1;
        int index=n;
        while(l<=h){
            long long int m=(l+h)/2;
            if(nums[m]>target){
                index=m;
                h=m-1;
            }else{
                l=m+1;
            }
        }
        return index;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        // find lower bound and upperbound -1 to get the first and last pos
        if(nums.size()==0){
            return {-1,-1};
        }
        int n=nums.size();
        int lb=lowerbound(nums,target,n);
        int ub=upperbound(nums,target,n);
        if(lb==nums.size()||nums[lb]!=target){
            return{-1,-1};
        }else{
            return {lb,ub-1};
        }

    }
};