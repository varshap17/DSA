#include<iostream>
#include<vector>
using namespace std;

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        vector<int> m;
        int i=0,j=0;
        while(i<N && j<M)
        {
            if(arr1[i]==arr1[i+1])
            {
                i++;
            }
            if(arr2[j]==arr2[j+1])
            {
                j++;
            }
            if(arr1[i]==arr2[j])
            {
                m.push_back(arr1[i++]);
                j++;
            }
            else if(arr1[i]<arr2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        if(m.size()==0)
        {
            m.push_back(-1);
        }
        
        return m;
    }
    
int main()
{
	int n,m;
	cin>>m>>n;
	int arr1[n];
	int arr2[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>arr2[j];
	}
	vector<int> ma=printIntersection(arr1,arr2,n,m);
	for(int i=0;i<ma.size();i++)
	{
		cout<<ma[i]<<" ";
	}
	return 0;
}
