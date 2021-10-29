#include<math.h>
#include<string>
#include<iostream>
using namespace std;

string smallestK(long long n)
{
    if(floor(log10(n))==1)
    {
        string str=to_string(n);
        return str;
    }
    for(int i=10;;i++)
    {
        int K=i;
        int pro=1;
        while(i>0)
        {
            int rem=i%10;
            pro=pro*rem;
            if(pro==n)
            {
                string str1=to_string(n);
                return str1;
            }
            i=i/10;
        }
    }
    return "-1";
}

int main()
{
	long long n;
	cin>>n;
	cout<<smallestK(n);
	return 0;
}
