class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       
        vector<int> res;
        vector<int> pos;
        vector<int> neg;
        for(int i:nums){
            if(i>=0){
                pos.push_back(i);
            }else{
                neg.push_back(i);
            }
        }
        int p=0;
        int n=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                res.push_back(pos[p]);
                p++;
            }else{
                res.push_back(neg[n]);
                n++;

            }
        }
        return res;
        
    }
};