#include <bits/stdc++.h>
using namespace std;


string convertToRoman(int ) ;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	cout << convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}// } Driver Code Ends

#include<cstring>
/*you are required to complete 
this function*/

// n :given number that you are require to convert
string convertToRoman(int n) 
{
    string s;
    int arr[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    int i=12;
    while(n>0)
    {
        while(n>=arr[i])
        {
            s+=sym[i];
            n-=arr[i];
        }
        i--;
    }
    return s;
}
