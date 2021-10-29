#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) 
{
    if(n==0)
    {
        return 5;
    }
    int num=0;
    int d=floor(log10(n)+1);
    for(int i=d;i>0;i--)
    {
        int x=pow(10,i-1);
        int rem=n/x;
        if(rem==0)
        {
            num=num*10+5;
        }
        else
        {
            num=num*10+rem;
        }
        n=n%x;
    }
    return num;
}
