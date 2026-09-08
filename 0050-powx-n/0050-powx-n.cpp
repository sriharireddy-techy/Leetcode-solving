class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        long long temp=n;
        if(n<0){
            temp=-1*temp;
        }
        while(temp>0){
            if(temp%2==1){
                res=res*x;
                temp=temp-1;
            }else{
                x=x*x;
                temp=temp/2;
            }
        }
        if(n<0){
            res=1.0/(double)res;
        }
        return res;
        




    }
};