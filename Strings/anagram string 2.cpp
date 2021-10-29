/*Given two strings a and b consisting of lowercase characters. 
The task is to check whether two given strings are an anagram of each other or not. 
An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
For example, “act” and “tac” are an anagram of each other.*/

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        int n=a.length();
        int m=b.length();
        if(n!=m)
        {
            return false;
        }
        int arr1[26]={0};
        for(int i=0;i<n;i++)
        {
            arr1[a[i]-97]++;
            arr1[b[i]-97]--;
        }
        for(int j=0;j<26;j++)
        {
            if(arr1[j]!=0)
            {
                return false;
            }
        }
        return true;
    }
};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends
