// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int a[], int N)
    {
       int start=0;
       int end=N-1;
       while(start<end)
       {
           while(a[start]==0)
           {
               start++;
           }
           while(a[end]==1)
           {
               end--;
           }
           if(start>=end)
           {
               break;
           }
           int temp=a[start];
           a[start]=a[end];
           a[end]=temp;
       }
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}



  // } Driver Code Ends
