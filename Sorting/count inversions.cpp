#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],long long temp[],long long l,long long mid,long long h)
    {
        long long i,j,k;
        long long int count=0;
        i=l;
        j=mid;
        k=l;
        while(i<mid && j<=h)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];
            }
            else
            {
                temp[k++]=arr[j++];
                count=count+(mid-i);
            }
        }
        while(i<mid)
        {
            temp[k++]=arr[i++];
        }
        while(j<=h)
        {
            temp[k++]=arr[j++];
        }
        for(int i=l;i<=h;i++)
        {
            arr[i]=temp[i];
        }
        return count;
    }
    long long int mergesort(long long arr[],long long temp[],long long l,long long h)
    {
        long long mid;
        long long int count=0;
        if(h>l)
        {
            mid=(l+h)/2;
            count+=mergesort(arr,temp,l,mid);
            count+=mergesort(arr,temp,mid+1,h);
            count+=merge(arr,temp,l,mid+1,h);
        }
        return count;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        long long temp[N];
        long long int ans=mergesort(arr,temp,0,N-1);
        return ans;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends
