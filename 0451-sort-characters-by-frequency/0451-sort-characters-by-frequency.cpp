class Solution {
public:
    string frequencySort(string s) {
        unordered_map <char,int> hash;
        string ans;
        for(char c:s){
            hash[c]++;
        }
        vector<pair<char,int>> vec(hash.begin(),hash.end());
        sort(vec.begin(),vec.end(),[](const auto&a,const auto&b){
            return a.second>b.second;
        });
        for(const auto&i :vec){
            for(int j=0;j<i.second;j++){
                ans+=i.first;
            }
        }
        return ans;
    }
};