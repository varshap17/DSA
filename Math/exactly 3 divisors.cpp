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
int exactly3Divisors(int N)
{
    int count=0;
    for(int i=2;i<=sqrt(N);i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<exactly3Divisors(n);
    return 0;
}
