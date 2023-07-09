//1423. Maximum Points You Can Obtain from Cards

class Solution {
public:
    int maxScore(vector<int>& arr, int b) {
        int csum=0;
    int n=arr.size();
    for(int i=0; i<b;i++){
        csum = csum + arr[i];
    }
    
    int exc=b-1;
    int inc=n-1;
    int maxsum=csum;
    while(exc>=0){
        csum += arr[inc--];
        csum -= arr[exc--];
        maxsum= max(maxsum,csum);
    }
    return maxsum;
    }
};