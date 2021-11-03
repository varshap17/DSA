//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k)
    {
        if(str1.length()!=str2.length())
        {
            return false;
        }
        int arr[26]={0};
        for(int i=0;i<str1.length();i++)
        {
            arr[str1[i]-'a']++;
        }
        for(int j=0;j<str2.length();j++)
        {
            arr[str2[j]-'a']--;
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
            {
                count+=(abs(arr[i]));
            }
        }
        if(count/2<=k)
        {
            return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends
