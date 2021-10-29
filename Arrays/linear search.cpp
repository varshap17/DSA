#include<iostream>
using namespace std;

int search(int arr[],int n,int d)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            return i;
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
