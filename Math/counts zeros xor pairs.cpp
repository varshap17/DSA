// that their XOR is 0
#include <bits/stdc++.h>
using namespace std;

// Function to calculate the
// count
long long int calculate(int a[], int n);

// Driver Code
int main()
{

	int t;
	cin>>t;
	while(t--)
	{
	  int n;
	  cin>>n;
	  int arr[n+1];
	  for( int i=0;i<n;i++)
	        cin>>arr[i];
	    cout << calculate(arr, n)<<endl;
        
	}
	return 0;
}

// } Driver Code Ends


long long int calculate(int a[], int n)
{
    long long count=0;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    for(auto i:m)
    {
        int x=i.second;
        if(x)
        {
            count+=x*(x-1)/2;
        }
    }
    return count;
}

