#include<bits/stdc++.h>

using namespace std;

//solution class
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
		int n=arr.size();
	   	k=k%n;
	   	//if array has only "1" element or it is a multiple of given count of rotations i.e "k" return 0;
		 if (n == 0) return;
		 if (k == 0) return;

	   //taking a temp array to add the elements that we will rotate
	   int temp[k];
	   for(int i=n-k;i<n;i++){
	       temp[i-(n-k)]=arr[i];
	   }

	   //shifting, in place, the remaining elements of array, k places ahead each.
	   for(int i=n-k-1;i>=0;i--){
	       arr[i+k]=arr[i];
	   }
	   //final loop to merge the temp array and given array to get the resultant array
	   for(int i=0;i<k;i++){
	       arr[i]= temp[i];
	       

	      //quick algo for understanding: 1.store in temp, 2.shift in place, 3.merge.
	   }
	   
    }
};
int main()
{
	init_code();
	int t;
	cin >> t;
	while (t--)
{
	int k;
	cin >> k; 
	vector<int> arr; 
	for (int i = 0; i < n; i++)
{
 cin >> arr[i];
}
	Solution ob; 
	cout << ob.rotate(arr, n) << "\n";
}
	return 0;
}
