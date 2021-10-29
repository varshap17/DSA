#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int c;
    bool f=true;
    int i;
    for(i=0;i<s.length();i++)
    {
        int j;
        for(j=0;j<x.length();j++)
        {
            if(s[i+j]!=x[j])
            {
                f=false;
                break;
            }
            f=true;
        }
        if(f==true && j==x.length())
        {
            return i;
        }
    }
    return -1;
}
    
