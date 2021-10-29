// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	int sum=0;
    	int t=0;
    	for(int i=0;i<str.length();i++)
    	{
    	    if(str[i]>='0' && str[i]<='9')
    	    {
    	        t=t*10+(str[i]-'0');
    	    }
    	    else
    	    {
    	        sum+=t;
    	        t=0;
    	    }
    	    
    	}
    	return sum+t;
    	
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
