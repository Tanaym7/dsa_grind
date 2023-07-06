#include<bits/stdc++.h>

using namespace std;

//solution class
class Solution {
public:
    void moveZeroes(int arr[], int n) {
       	
       	//store the index of first occurence of zero.
        int j = INT_MIN,i;
        for(i=0;i<n;i++){
            if(arr[i] == 0){
            j=i;
            break;
        }
    }
    
    //if no zero found in array,return.
    if(j==INT_MIN) return;

    //swap the non zero elements with zero and increment till n;
    for(i=j+1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    }
};
int main()
{
	int t;
	cin >> t;
	while (t--)
{
	int n;
	cin >> n; 
	int arr[n]; 
	for (int i = 0; i < n; i++)
{
 cin >> arr[i];
}
	Solution ob; 
	ob.moveZeroes(arr, n);
	for (int i = 0; i < n; i++)
{
 cout<< arr[i];
}
}
	return 0;
}
