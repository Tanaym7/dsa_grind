
class Solution{		
	public:
	void leftRotate(int arr[], int d, int n) 
	{ 
	   // Your code goes here
	   d = d % n;
	   int temp[d];
	   for(int i=0;i<d;i++){
	       temp[i]=arr[i];
	   }
	   
	   for(int i=d;i<n;i++){
	       arr[i-d] = arr[i];
	   }
	   
	   for(int i=n-d;i<n;i++){
	       arr[i] = temp[i-(n-d)];
	       
	   }
	   
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
