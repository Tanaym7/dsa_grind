// solution class
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=1;j<n;j++){
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
    return i+1;
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
