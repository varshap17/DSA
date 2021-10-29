#include<iostream>
using namespace std;

int search(int arr[],int n,int d)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==d)
        {
            return mid;
        }
        if(mid<d)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:"<<endl;
    cin>>d;
    if(search(arr,n,d)==-1)
    {
        cout<<"Element not found in array"<<endl;
    }
    else
    {
        cout<<d<<" is found in position "<<search(arr,n,d)+1<<endl;
    }
    return 0;
}
