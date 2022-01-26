#include <iostream>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    string roundToNearest(string N) 
    { 
        int n=N.length();
        int c=0;
        if(n==1 && N[0]>='6' && N[0]<='9')
        {
            return "10";
        }
        if(N[n-1]>'5' && N[n-1]<='9')
        {
            N[n-1]='0';
            for(int i=N.length()-2;i>=0;i--)
            {
                int rem=N[i]-'0';
                if(rem<9)
                {
                    c=0;
                    N[i]=(rem+1+'0');
                    break;
                }
                else
                {
                    N[i]='0';
                    c=1;
                }
            }
        }
        else
        {
            N[n-1]='0';
            return N;
        }
        if(c==1)
        {
            N='1'+N;
        }
        return N;
    }  

};

// { Driver Code Starts.

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout << ob.roundToNearest(s) << endl;
    }
    
	return 0;
}  // } Driver Code Ends
