#include<iostream>
#include<cmath>
using namespace std;

int digitsInFactorial(int N)
{
    if(N<=1)
    {
        return 1;
    }
    double d=0.0;
    for(int i=2;i<=N;i++)
    {
        d+=log10(i);
    }
    return floor(d+1);
}
int main()
{
    int n;
    cin>>n;
    cout<<digitsInFactorial(n);
    return 0;
}
 
