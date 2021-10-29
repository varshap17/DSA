#include<iostream>
using namespace std;

int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	int h=15;
	int H[h+1]={0};
	for(int i=0;i<10;i++)
	{
		H[arr[i]]++;
	}
	for(int i=1;i<=h;i++)
	{
		if(H[i]>1)
		{
			cout<<i<<" appears "<<H[i]<<" times\n";
		}
	}
	return 0;
}
