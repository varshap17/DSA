#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int N)
{
	queue <string> binary;
	vector <string> m;
	binary.push("1");
	while(N--)
	{
	    string cur=binary.front();
	    m.push_back(cur);
	    binary.pop();
	    binary.push(cur+"0");
	    binary.push(cur+"1");
	}
	return m;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
