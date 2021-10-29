#include<iostream>
using namespace std;

int left_max(int a[],int n,int i)
{
    int m=0;
    for(int j=0;j<=i;j++)
    {
        m=max(m,a[j]);
    }
    return m;
}
int right_max(int a[],int n,int i)
{
    int m=0;
    for(int j=n-1;j>=i;j--)
    {
        m=max(m,a[j]);
    }
    return m;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int total=0;
    for(int j=1;j<n-1;j++)
    {
        int left=left_max(a,n,j);
        int right=right_max(a,n,j);
        total=total+(min(left,right)-a[j]);
    }
    cout<<"Rain drops trapped = "<<total;
    return 0;
}