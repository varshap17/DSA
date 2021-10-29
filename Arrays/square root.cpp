#include<iostream>
using namespace std;

int squareroot(int n)
{
    if(n==0 || n==1)
        return n;
    int l=0,r=n-1,ans;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(mid*mid==n)
        {
            return mid;
        }
        if(mid*mid<n)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
        ans=mid;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<squareroot(n);
    return 0;
}
