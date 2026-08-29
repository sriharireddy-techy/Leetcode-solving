class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> majority;
        for(int i :nums){
            majority[i]++;
        }
        int index=0;
        int max=-1;
        for(const auto&i :majority){
            if(i.second>max){
                max=i.second;
                index=i.first;
            }
        }
        return index;
    }
};