//soution class
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1;
    }
};
// driver code
int main(){
   int t=1;
   //cin >> t;
   while (t--){
   int n;
   cin >> n; 
   vector<int>arr(n); 
   for (int i = 0; i < n; i++){ 
     cin >> arr[i];
}
     Solution ob; 
     cout << ob.check(arr, n) << "\n";
}
   return 0;
}
