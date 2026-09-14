class Solution {
public:
    int index(vector<int>& nums,int target,int l,int u){
        
        if(l>u){
            return l;
        }
        int m=(l+u)/2;
        if(nums[m]==target){
            return m;
        }
        if(nums[m]<target){
            return index(nums,target,m+1,u);
        }else{
            return index(nums,target,l,m-1);
        }
        
    }
    int searchInsert(vector<int>& nums, int target) {
        int l=nums.size()-1;
        int ind=index(nums,target,0,l);
        return ind;
    }
};