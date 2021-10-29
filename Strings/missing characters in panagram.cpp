//Initial Template for C++
/*You are given a string s. You need to find the missing characters in the string to make a panagram.
Note: The output characters will be lowercase and lexicographically sorted.

Example 1:

Input:
s = Abcdefghijklmnopqrstuvwxy
Output: z
 
Example 2:

Input:
s = Abc
Output: defghijklmnopqrstuvwxyz*/

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    string missingPanagram(string str)
    {
        int arr[26]={0};
        int n=str.length();
        string r;
        for(int i=0;i<n;i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                arr[(str[i]-'A')]++;
            }
            else if(str[i]>='a' && str[i]<='z')
            {
                arr[(str[i]-'a')]++;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            {
                r.push_back(i+'a');
            }
        }
        if(r.length())
        {
            return r;
        }
        else
        {
            return "-1";
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
	cin >> s;
	Solution obj;
	cout << obj.missingPanagram(s) << endl;
	}
	return 0;
	
}

  // } Driver Code Ends
