

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        bool check[n+1]={false};
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0 && arr[i]<=n)
            {
                check[arr[i]]=true;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(!check[i])
            {
                return i;
            }
        }
        return n+1;
    } 
};

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends
