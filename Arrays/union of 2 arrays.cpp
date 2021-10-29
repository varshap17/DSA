#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        unordered_set<int> set;
        vector<int> ma;
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(arr1[i]<arr2[j])
            {
                if(set.count(arr1[i])==0)
                {
                    ma.push_back(arr1[i]);
                    set.insert(arr1[i]);
                }
                i++;
            }
            else if(arr1[i]==arr2[j])
            {
                if(set.count(arr1[i])==0)
                {
                    ma.push_back(arr1[i]);
                    set.insert(arr1[i]);
                }
                i++;
                j++;
            }
            else
            {
                if(set.count(arr2[j])==0)
                {
                    ma.push_back(arr2[j]);
                    set.insert(arr2[j]);
                }
                j++;
            }
        }
        while(i<n)
        {
            if(set.count(arr1[i])==0)
                {
                    ma.push_back(arr1[i]);
                    set.insert(arr1[i]);
                }
                i++;
        }
        while(j<m)
        {
            if(set.count(arr2[j])==0)
                {
                    ma.push_back(arr2[j]);
                    set.insert(arr2[j]);
                }
                j++;
        }
        return ma;
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
	vector<int> ma=findUnion(arr1,arr2,n,m);
	for(int i=0;i<ma.size();i++)
	{
		cout<<ma[i]<<" ";
	}
	return 0;
}
