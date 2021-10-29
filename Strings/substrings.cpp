#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char str[n];
    cin>>str;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            string sub="";
            for(int k=i;k<i+j;k++)
            {
                sub=sub+str[k];
            }
            cout<<sub<<endl;
        }
    }
    return 0;
}
