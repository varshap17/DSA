#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low;
	int j=high;
	do
	{
		do
		{
			i++;
		}while(a[i]<=pivot);
		do
		{
			j--;
		}while(a[i]>=pivot);
		if(i<j)
		{
			swap(&a[i],&a[j]);
		}
	}while(i<j);
	swap(&a[low],&a[j]);
	return j;
}
void quicksort(int a[],int low,int high)
{
	int j;
	if(low<high)
	{
		j=partition(a,low,high);
		quicksort(a,low,j);
		quicksort(a,j+1,high);
	}
}
int main()
{
	int a[]={8,3,7,1,6,9,2,0,5};
	quicksort(a,0,8);
	for(int i=0;i<9;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
