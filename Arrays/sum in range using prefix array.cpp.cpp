#include<iostream>
using namespace std;

int SumInRange(int arr[],int n,int a,int b)
{
    int sumrange[b-a];
    sumrange[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        sumrange[i]=sumrange[i-1]+arr[i];
    }
    if (a==0)
    {
        return sumrange[b];
    }
    return sumrange[b]-sumrange[a-1];
}
int main()
{
    int n,a,b;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the range:"<<endl;
    cin>>a>>b;
    cout<<SumInRange(arr,n,a,b);
    return 0;
}
