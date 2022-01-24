#include<map>
#include<set>
#include<algorithm>
using namespace std;

struct comp
{
    template<typename T>
    bool operator()(const T& a,const T& b)const
    {
        if(a.second!=b.second)
        {
            return a.second>b.second; 
        }
        else
        {
            return a.first<b.first;
        }
    }
};
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        m[a[i]]++;
	    }
	    set<pair<int,int>,comp> s(m.begin(),m.end());
	    for(auto x:s)
	    {
	        for(int i=0;i<x.second;i++)
	        {
	            cout<<x.first<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
