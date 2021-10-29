#include <bits/stdc++.h>
using namespace std;

int maxLen(int A[], int n);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];
        cout << maxLen(A, N) << endl;
    }
}
// } Driver Code Ends


/*You are required to complete this function*/

int maxLen(int A[], int n)
{
    int sum=0;
    int total=0;
    unordered_map <int,int> m;
    for(int i=0;i<n;i++)
    {
        sum+=A[i];
        if(sum==0)
        {
            total=i+1;
        }
        if(m.find(sum)!=m.end())
        {
            total=max(total,i-m[sum]);
        }
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
        }
    }
    return total;
}

