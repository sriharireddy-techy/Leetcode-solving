class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> hash;
        unordered_map <char,int> hashing;
        int count=0;
        if(s.length()!=t.length()){
            return false;
        }
        for(char ch :s){
            hash[ch]++;
        }
        for(char c:t){
            if(hash.find(c)==hash.end()){
                hashing[c]++;
                return false;
            }else{
                hashing[c]++;
                
            }
        }
        for (const auto& pair : hash) {
            char letter = pair.first;
            int count1 = pair.second;
            if (hashing.count(letter) == 0) {
                return false; 
            }

            if (hashing[letter] != count1) {
                return false; 
            }
        }
        return true;
    }
};