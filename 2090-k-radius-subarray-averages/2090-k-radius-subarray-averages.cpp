class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> array(n,0);
        if (k * 2 + 1 > n) {
            return vector<int>(n, -1); 
        }

        for(int i=0;i<k;i++){
            array[i]=-1;
            // cout<<array[i]<<endl;
        }
        // build first window for i index
        long long sum=0;
        int firstindex=k;
        for(int i=0;i<=firstindex+k;i++){
            sum=sum+nums[i];
            
        }
        int start=0;int end=k+firstindex;
        int window_size = 2 * k + 1;
        int avg=sum/window_size;
        array[firstindex]=avg;
        int j=firstindex+1;
        
        // cout<<sum;
        // cout<<avg<<endl;
        while(firstindex+1<n-k){
            firstindex++;
            sum=sum-nums[start];
            start++;
            end++;
            sum=sum+nums[end];
            // cout<<sum/(k+1+firstindex)<<endl;
            array[j]=sum/window_size;
            // cout<<array[j];
            j++;
        }
        for(int i=n-k;i<n;i++){
            array[i]=-1;
            // cout<<array[i]<<endl;
        }
        return array;
    }
};