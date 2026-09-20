class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int i=0;
        while(s[i]!='\0'){
            int ch='z'-s[i]+1;
            sum=sum+((i+1)*ch);
            i++;
        }
        return sum;
    }
};