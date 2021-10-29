#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    gcd(b%a,a);
}

int modInverse(int a, int m)
{
    if(gcd(a,m)==1)
    {
        for(int i=0;i<m;i++)
        {
            if((i*a)%m==1)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int a,m;
    cin>>a>>m;
    cout<<modInverse(a,m);
    return 0;
}
