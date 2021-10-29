//Input: n = 5
//Output: 21
//Explanation: Following are the possible 
//pairs of (x, y):
//(1, 5), (2, 2), (3, 1), (4, 1), (5, 1).
//So, 1*5 + 2*2 + 3*1 + 4*1 + 5*1 
 //  = 5 + 4 + 3 + 4 + 5 
   //= 21. 

#include<iostream>
using namespace std;

long long int sumofproduct(int n)
{
    long long sum=0;
    int j=1;
    for(int i=1;i<=n;i++)
    {
        int y=n/i;
        sum=sum+(i*y);
    }
    return sum;
}  

int main()
{
	int n;
	cin>>n;
	cout<<sumofproduct(n);
	return 0;
}
