class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k= k%n;
        vector<int> temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int j=0;j<n-k;j++){
            temp.push_back(nums[j]);
        
        }
        nums=temp;
        
        
    }
};