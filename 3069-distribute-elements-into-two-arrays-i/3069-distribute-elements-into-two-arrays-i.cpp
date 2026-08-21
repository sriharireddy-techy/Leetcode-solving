class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int l=nums.size();
        vector<int> arr1;
        vector<int> arr2;
        if(l==0)return nums;
        if(l>=1)arr1.push_back(nums[0]);
        if(l>=2)arr2.push_back(nums[1]);
        for(int k=2;k<l;++k){
            if(arr1.back()>arr2.back()){
                arr1.push_back(nums[k]);
            }else{
                arr2.push_back(nums[k]);
            }
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};