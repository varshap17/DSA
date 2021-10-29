//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    typedef pair<int,pair<int,int>> p;
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        vector<int> m;
        priority_queue<p,vector<p>,greater<p>> q;
        for(int i=0;i<K;i++)
        {
            q.push({arr[i][0],{i,0}});
        }
        while(!q.empty())
        {
            p cur=q.top();
            q.pop();
            
            int value=cur.first;
            int arrayno=cur.second.first;
            int index=cur.second.second;
            m.push_back(value);
            if(index+1<K)
            {
                q.push({arr[arrayno][index+1],{arrayno,index+1}});
            }
        }
        return m;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(N, vector<int> (N, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}





  // } Driver Code Ends
