#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    int count=0;
    int arr[26]={0};
    for(int i=0;i<str1.length();i++)
    {
        arr[str1[i]-'a']++;
    }
    for(int j=0;j<str2.length();j++)
    {
        arr[str2[j]-'a']--;
    }
    for(int k=0;k<26;k++)
    {
        if(arr[k]!=0)
        {
            count+=(abs(arr[k]));
        }
    }   
    return count;
}
