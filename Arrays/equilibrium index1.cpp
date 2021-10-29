#include<iostream>
using namespace std;

int equilibrium(int arr[],int n)
{
	int j=0;
    int suml=0,sumr=0;
    for(int i=1;i<n;i++)
    {
    	while(j<i)
    	{
    		suml=suml+arr[j];
    		j++;
		}
		j=i+1;
		while(j<n)
		{
			sumr=sumr+arr[j];
			j++;
		}
		if(suml==sumr)
		{
			return i;
		}
		j=0;
		suml=0;
		sumr=0;
	}
	return -1;
}

int main()
{
	int n;
	cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    if(equilibrium(arr,n)==-1)
    {
    	cout<<"No equilibrium index exists"<<endl;
	}
	else
	{
		cout<<"Equilibrium index = "<<equilibrium(arr,n)<<endl;
	}
	return 0;
}
