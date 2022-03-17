#include <bits/stdc++.h>
using namespace std;

int save_gotham(int arr[], int n);



int main() {
    
    int t;
    cin>> t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        cout << save_gotham(arr, n) << endl;
    }
    
	return 0;
}// } Driver Code Ends


int save_gotham(int arr[], int n)
{
    stack<int> s;
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty() && s.top()<=arr[i])
        {
            s.pop();
        }
        sum+=s.empty()?0:s.top();
        sum%=1000000001;
        s.push(arr[i]);
    }
    return sum;
}
