#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
        vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> ans;
            map<int,int> m1;
            map<int,int> m2;
            map<int,int> m3;
            map<int,int> m4;
            for(int i=0;i<n1;i++)
            {
                m1[A[i]]++;
            }
            for(int j=0;j<n2;j++)
            {
                m2[B[j]]++;
            }
            for(int k=0;k<n3;k++)
            {
                m3[C[k]]++;
            }
            for(auto x:m1)
            {
                if(m2.find(x.first)!=m2.end() && m3.find(x.first)!=m3.end() && m4.find(x.first)==m4.end())
                {
                    ans.push_back(x.first);
                    m4[x.first]++;
                }
            }
            return ans;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
