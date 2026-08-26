class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> hashmap;
        unordered_map<char, char> t_to_s;
        if (s.length() != t.length()) return false;
        
        int i=0;
        for(char ch: s){
            if(hashmap.find(ch)!=hashmap.end()){
                if(hashmap[ch]!=t[i]){
                    return false;
                }

            }else{
                if(t_to_s.find(t[i]) != t_to_s.end()){
                    return false;
                }
                hashmap[ch]=t[i];
                t_to_s[t[i]]=ch;
            }
            i++;
        }
        return true;
    }
};