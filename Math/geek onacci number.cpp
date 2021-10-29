#include <iostream>
using namespace std;

int recur(int a, int b, int c, int n)
{
    int sum;
    for(int i=3;i<n;i++)
    {
        sum=a+b+c;
        a=b;
        b=c;
        c=sum;
    }
    return sum;
}
int main() {
    int t;
    cin>>t;
    while(t>0)
    { 
	    int a,b,c,n;
    	cin>>a>>b>>c>>n;
    	cout<<recur(a,b,c,n)<<"\n";
    	t--;
    }
	    return 0;
}
