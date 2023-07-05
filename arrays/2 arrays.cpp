#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
//function to return rotated array
vector<int> rotate(vector<int> &arr, int n)
    {
        //code here
        int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    return arr;
	}
 
//printing the vector array
 void print_vector(vector<int> &arr)
   {  
       for (auto i = arr.begin(); i != arr.end(); ++i)
        {cout<< *i << " ";}
   }
 
int main()
{
	init_code();
	int t;
	cin >> t;
	while (t--)
{
	int n;
	cin >> n; 
	vector<int>arr(n); 
	for (int i = 0; i < n; i++)
{
 cin >> arr[i];
}
	vector<int> even_vect=rotate(arr,n);
   print_vector(even_vect);

}
	return 0;
}