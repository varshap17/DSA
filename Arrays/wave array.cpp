#include<iostream>
using namespace std;

int main()
{
	int n;
	int a[n];
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;
	cout<<"Enter the elements:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int temp,i;
    for(i=0;i<n-1;i+=2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
    
