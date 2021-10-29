#include <iostream>
#include <string>
using namespace std;

string reverse(string s)
{
	string an;
	for(int i=s.length()-1;i>=0;i++)
	{
		an=an+s[i];
	}
	return an;
}
string add(string s1,string s2)
{
	reverse(s1);
	reverse(s2);
	int m=s1.length();
	int n=s2.length();
	int i=0,j=0;
	int carry=0;
	string ans="";
	while(i<m && j<n)
	{
		int x=s1[i]-'0';
		int y=s2[j]-'0';
		int z=x+y+carry;
		int c=z%10;
		carry=z/10;
		ans=ans+c;
		i++;
		j++;
	}
	while(i<m)
	{
		int x=s1[i]-'0';
		int z=x+carry;
		int c=z%10;
		carry=z/10;
		ans=ans+to_string(c);
		i++;
	}
	while(j<n)
	{
		int y=s2[j]-'0';
		int z=y+carry;
		int c=z%10;
		carry=z/10;
		ans=ans+to_string(c);
		j++;
	}
	if(carry==1)
	{
		ans=ans+to_string(1);
	}
	return ans;
}
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	cout<<add(s1,s2);
	return 0;
}
