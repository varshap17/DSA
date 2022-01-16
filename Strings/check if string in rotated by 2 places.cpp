#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places
    bool isRotated(string str1, string str2)
    {
        int n=str2.length();
        int m=str1.length();
        if(m<2 || n<2)
        {
            if(str1==str2)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        string temp1;
        temp1.append(str1.substr(2,m-1));
        temp1.append(str1.substr(0,2));
        string temp2;
        temp2.append(str1.substr(m-2,2));
        temp2.append(str1.substr(0,m-2));
        if(str2==temp1 || str2==temp2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
