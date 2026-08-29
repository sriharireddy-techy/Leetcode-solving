class Solution {
public:
    int romanToInt(string s) {
        int total=0;
        int len=s.length();
        
        for (int i=0;i<len;i++){
            int current=getvalue(s[i]);
            if(i+1<len && current<getvalue(s[i+1])){
                total=total-current;
            }else{
                total=total+current;
            }
        }
        return total;
    }
    int getvalue(char c){
        switch(c){
            case 'I':return 1;
            case 'V':return 5;
            case 'X':return 10;
            case 'L':return 50;
            case 'C':return 100;
            case 'D':return 500;
            case 'M':return 1000;
            default : return 0;
        }

    }
};