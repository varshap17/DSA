//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        map<int,int> m;
        for(int i=0;i<size;i++)
        {
            m[a[i]]++;
        }
        int count=0;
        int num=0;
        for(auto i:m)
        {
            if(i.second>count)
            {
                count=i.second;
                num=i.first;
            }
        }
        if(count>size/2 && num!=0)
        {
            return num;
        }
        else
        {
            return -1;
        }
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
