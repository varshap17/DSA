#include<iostream>
using namespace std;

int countSetBits(int a)
{
	int count=0;
	while(a)
	{
		a=a&(a-1);
		count++;
	}
	return count;
}
int main()
{
    int i = 13;
    cout <<countSetBits(i);
    return 0;
}
