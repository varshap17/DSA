#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        sort(str.begin(),str.end());
        int cnt=0;
        char ch=str[0];
        int max=count(str.begin(),str.end(),str[0]);
        for(int i=1;i<str.length();i++)
        {
            cnt=count(str.begin(),str.end(),str[i]);
            if(cnt>max)
            {
                max=cnt;
                ch=str[i];
            }
        }
        return ch;
    }

};

// { Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}  // } Driver Code Ends
