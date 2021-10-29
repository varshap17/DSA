#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the range:"<<endl;
    cin>>n;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int i=2;i<=sqrt(n);i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}
