#include <bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int ternarySearch(int arr[], int N, int K) 
    { 
       int i=0;
       int j=N-1;
       while(i<=j)
       {
           int mid1=i+(j-i)/3;
           int mid2=mid1+(j-i)/3;
           if(arr[mid1]==K || arr[mid2]==K)
           {
               return 1;
           }
           else if(arr[mid1]>K)
           {
               j=mid1-1;
           }
           else if(arr[mid2]<K)
           {
               i=mid2+1;
           }
           else
           {
               i=mid1+1;
               j=mid2-1;
           }
       }
       return -1;
    }
};

// { Driver Code Starts.
int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int N, K;
        cin >> N >> K;
        
        int arr[N];
        
        for(int i = 0;i<N;i++){
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.ternarySearch(arr, N, K) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends
