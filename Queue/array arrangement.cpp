

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++
/*Given an array arr[] of size N, the task is to print the arrangement of the array such that upon performing the following operations on this arrangement, increasing order is obtained as the output:  

Take the first (0th index) element, remove it from the array and print it.
If there are still elements left in the array, move the next top element to the end of the array.
Repeat the above steps until the array is not empty.*/

vector<int> arrangement(vector<int> arr) 
{ 
    sort(arr.begin(),arr.end());
    int n=arr.size();
    vector <int>ans(n,0);
    deque<int> q;
    for(int i=0;i<arr.size();i++)
    {
        q.push_back(i);
    }
    for(int i=0;i<n;i++)
    {
        int j=q.front();
        q.pop_front();
        ans[j]=arr[i];
        if(!q.empty())
        {
            j=q.front();
            q.pop_front();
            q.push_back(j);
        }
    }
    return ans;
    
} 

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, temp;
	    cin>>num;
	    vector<int>arr,ans;
	    for(int i = 0; i<num; i++)
	        {
	            cin>>temp;
	            arr.push_back(temp);
	        }
	    
	    ans = arrangement(arr);
	    for(int i = 0 ;i<ans.size();i++)
	        cout<<ans[i]<<" ";
	       
	   cout<<endl;     
	    
	}
	
	return 0;
}  // } Driver Code Ends
