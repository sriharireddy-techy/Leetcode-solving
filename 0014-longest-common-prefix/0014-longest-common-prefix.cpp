class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first=strs[0];
        for(int i=0;i<first.length();i++){
            char current=first[i];
            for(int j=1;j<strs.size();j++){
                if(i==strs[j].length()||strs[j][i]!=current){
                    
                    return first.substr(0,i);
                }
            }
        }
        if(first.empty()){
            return "";
        }
        return first;

    

    }
};