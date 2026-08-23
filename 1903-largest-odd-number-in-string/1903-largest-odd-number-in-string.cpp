class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        int index;
        for(int i=n-1;i>=0;i--){
            if(num[i]%2!=0){
                index=i;
                break;
            }else{
                continue;
            }
        }
        if(index>=0){
            return num.substr(0,index+1);
        }else{
            return "";
        }
    }
};