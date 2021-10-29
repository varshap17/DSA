#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int swapNibbles(unsigned char x)
    {
        unsigned char y=x<<4;
        unsigned char z=x>>4;
        return y|z;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.swapNibbles(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends
