#include<iostream>
#include<string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		cout<<PalinArray(a,n)<<endl;
	}
}// } Driver Code Ends


/*Complete the function below*/
int PalinArray(int a[], int n)
{ 
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int num1=0;
        while(num>0)
        {
            int rem=num%10;
            num1=(num1*10)+rem;
            num=num/10;
        }
        if(num1!=a[i])
        {
            return 0;
        }
    }
    return 1;
}
