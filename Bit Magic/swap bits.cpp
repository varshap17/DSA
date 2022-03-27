#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:    
    int swapBits(int x, int p1, int p2, int n)
    {
        unsigned int set1=(x>>p1)&((1U<<n)-1);
        unsigned int set2=(x>>p2)&((1U<<n)-1);
        unsigned int xxor=(set1^set2);
        xxor=(xxor<<p1)|(xxor<<p2);
        unsigned int result=x^xxor;
        return result;
    }
};

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}  // } Driver Code Ends
