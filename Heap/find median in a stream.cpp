#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    //Function to insert heap.
    priority_queue <int> s;
    priority_queue<int,vector<int>,greater<int>> g;
    void insertHeap(int &x)
    {
        if(s.empty() || x<s.top())
        {
            s.push(x);
        }
        else
        {
            g.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        int l=s.size();
        int r=g.size();
        if(l-r>1)
        {
            g.push(s.top());
            s.pop();
        }
        else if(r-l>1)
        {
            s.push(g.top());
            g.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        int l=s.size();
        int r=g.size();
        if(l==r)
        {
            return double((s.top()+g.top())/2);
        }
        else if(l>r)
        {
            return s.top();
        }
        else
        {
            return g.top();
        }
    }
};


// { Driver Code Starts.

int main()
{
    int n, x;
    int t;
    cin>>t;
    while(t--)
    {
    	Solution ob;
    	cin >> n;
    	for(int i = 1;i<= n; ++i)
    	{
    		cin >> x;
    		ob.insertHeap(x);
    	    cout << floor(ob.getMedian()) << endl;
    	}
    }
	return 0;
}  // } Driver Code Ends
