#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    string ans="";
    int count=0;
    for(int i=0;i<src.length();i++)
    {
        char s=src[i];
        while(src[i]==s)
        {
            count++;
            i++;
        }
        ans+=s;
        ans+=(count+'0');
        count=0;
        i--;
    }
    return ans;
}     
 
