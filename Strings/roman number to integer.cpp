// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) 
    {
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        int tot=0;
        for(int i=0;i<str.length();i++)
        {
            if(i==str.length()-1)
            {
                tot+=m[str[i]];
                break;
            }
            if(m[str[i]]<m[str[i+1]])
            {
                tot-=m[str[i]];
            }
            else
            {
                tot+=m[str[i]];
            }
        }
        return tot;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends
