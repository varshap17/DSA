#include<iostream>
using namespace std;

int getCount(string a, string b)
{
	int n=a.length();
	int m=b.length();
	if(m%n!=0)
	{
		return -1;
	}
	int count=m/n;
	string str="";
	for(int i=0;i<count;i++)
	{
		str=str+a;
	}
	if(str==b)
	{
		return count;
	}
	return -1;
}

int main()
{
    string a = "geeks";
    string b = "geeksgeeks";
    cout << getCount(a, b);
    return 0;
}
