#include <cmath>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
        int result=0,i=1;
        while(s[i]){
            int val1=s[i-1];
            int val2=s[i];
            result+=abs(val1-val2);
            i++;
        }
        return result;
    

    }
};