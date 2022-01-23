#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n)
{
   sort(arr,arr+size);
   int l=0;
   int r=0;
   while(l<size && r<size)
   {
       int d=arr[r]-arr[l];
       if(d==n && l!=r)
       {
           return 1;
       }
       else if(d<n)
       {
           r++;
       }
       else
       {
           l++;
       }
       
   }
   return 0;
}
