//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        vector <int> m;
        map<int,int> ma;
        for(int i=0;i<N;i++)
        {
            ma[A1[i]]++;
        }
        for(int i=0;i<M;i++)
        {
            if(ma.find(A2[i])!=ma.end())
            {
                int x=ma[A2[i]];
                while(x--)
                {
                    m.push_back(A2[i]);
                }
                ma.erase(A2[i]);
            }
        }
        for(auto x:ma)
        {
            int y=x.second;
            while(y--)
            {
                m.push_back(x.first);
            }
            ma.erase(x.first);
        }
        return m;
    } 
};

// { Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
  // } Driver Code Ends
