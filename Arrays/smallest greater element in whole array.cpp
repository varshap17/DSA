#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}
// } Driver Code Ends


int* greaterElement(int arr[], int n)
{
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    int ans[n];
    for(int i=0;i<n;i++)
    {
        auto a=s.find(arr[i]);
        if(a!=s.end())
        {
            arr[i]=*(++a);
            if(a==s.end())
            {
                arr[i]=-10000000;
            }
        }
        else
        {
            arr[i]=-10000000;
        }
    }
    return arr;
}
