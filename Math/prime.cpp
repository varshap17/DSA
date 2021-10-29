#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cin>>a;
    if(isPrime(a)==false)
    {
        cout<<a<<" is not prime"<<endl;
    }
    else
    {
        cout<<a<<" is prime"<<endl;
    }
    return 0;
}
