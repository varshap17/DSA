//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
    sort(A,A+n);
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                if(A[i]+A[j]+A[k]+A[l]==X)
                {
                    return true;
                }
                else if(A[i]+A[j]+A[k]+A[l]<X)
                {
                    k++;
                }
                else
                {
                    l--;
                }
            }
        }
    }
    return false;
}
