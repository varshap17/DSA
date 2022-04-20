#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	static bool cmp(pair<long double,long long>&a,pair<long double,long long>&b)
	{
	    return a.first>b.first;
	}
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p)
	{
	    vector<pair<long double,long long>> v;
	    for(int i=0;i<N;i++)
	    {
	        v.push_back({(double)p[i]/(double)w[i],w[i]});
	    }
	    sort(v.begin(),v.end(),cmp);
	    long double profit=0;
	    for(int i=0;i<v.size();i++)
	    {
	       long long m=sqrt(v[i].second);
	       if(v[i].second!=m*m)
	       {
	           if(C-v[i].second>=0)
	           {
	               profit+=v[i].first*v[i].second;
	               C=C-v[i].second;
	           }
	           else
	           {
	               long double x=v[i].first*C;
	               profit+=x;
	               break;
	           }
	       }
	   }
	   return profit;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends
