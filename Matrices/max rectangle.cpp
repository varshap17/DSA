#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxrect(int a[],int n)
    {
        int mmax=0;
        int m=0;
        stack<int> s;
        int i=0;
        while(i<n)
        {
            if(s.empty() || a[s.top()]<=a[i])
            {
                s.push(i++);
            }
            else
            {
                int y=s.top();
                s.pop();
                if(s.empty())
                {
                    m=a[y]*i;
                }
                else
                {
                    m=a[y]*(i-s.top()-1);
                }
            }
            mmax=max(m,mmax);
        }
        while(!s.empty())
        {
            int y=s.top();
            s.pop();
            if(s.empty())
            {
                m=a[y]*i;
            }
            else
            {
                m=a[y]*(i-s.top()-1);
            }
            mmax=max(mmax,m);
        }
        return mmax;
    }
    int maxArea(int M[MAX][MAX], int n, int m) 
    {
        int mm=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i!=0)
                {
                    if(M[i][j]!=0)
                    {
                        M[i][j]=M[i-1][j]+M[i][j];
                    }
                    else
                    {
                        M[i][j]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            int k=maxrect(M[i],m);
            mm=max(mm,k);
        }
        return mm;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends
