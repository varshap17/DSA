#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

void countsort(vector <int>&arr)
{
	int max=*max_element(arr.begin(),arr.end());
	int min=*min_element(arr.begin(),arr.end());
	int range=max-min+1;
	vector <int>count(range), output(arr.size());
	for(int i=0;i<arr.size();i++)
	{
		count[arr[i]-min]++;
	}
	for(int i=1;i<count.size();i++)
	{
		count[i]=count[i-1];
	}
	for(int i=arr.size()-1;i>0;i++)
	{
		output[count[arr[i]-min]-1]=arr[i];
		count[arr[i]-min]--;
	}
}
int main()
{
	int n;
	cin>>n;
	vector <int>arr;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		
		arr.push_back(m);
	}
	countsort(arr);
	vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
	return 0;
}
