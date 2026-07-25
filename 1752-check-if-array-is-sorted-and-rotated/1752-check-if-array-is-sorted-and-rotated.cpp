class Solution {
public:
    bool check(vector<int>& nums) {
        int drop_count = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
        
            if (nums[i] > nums[(i + 1) % n]) {
                drop_count++;
            }
        }
        
        return drop_count <= 1;
    }
};
