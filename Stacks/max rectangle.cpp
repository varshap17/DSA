#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/
class Solution{
  public:
  int maxareahist(int a[],int n)
{
    int area=0; 
    int i=0; 
    int mxarea=0;
    stack<int>s;
 
    while(i<n)
    {
        if(s.empty() || a[s.top()] <=a[i])
        s.push(i++);
   
    else
    {
       int y= s.top();
       s.pop();
       
       if(s.empty())
       area=a[y]*i;
       else
       area=a[y]*(i-s.top()-1);
       
       mxarea=max(area,mxarea);
   }
}

while(!s.empty())
{   
       int y= s.top();
       s.pop();
       
       if(s.empty())
       area=a[y]*i;
       else
       area=a[y]*(i-s.top()-1);
       
       mxarea=max(area,mxarea);
    
}
   return mxarea; 
}
//function to calculate the max area in matrix:
int maxArea(int M[MAX][MAX], int n, int m) {
   int maxx=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   if(i!=0)
            {
                if(M[i][j]!=0)
                M[i][j]=M[i-1][j]+M[i][j];
                else
                M[i][j]=0;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
          int k=maxareahist(M[i],m);
            maxx=max(k,maxx);
    }
    
    return maxx;
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
