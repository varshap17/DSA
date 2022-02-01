

 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        int c=0;
        int count=0;
        sort(arr,arr+N);
        for(int i=0;i<N;i++)
        {
            if(arr[i]==arr[i+1])
            {
                continue;
            }
            if(arr[i]==(arr[i+1]-1))
            {
                count++;
            }
            else
            {
                count=0;
            }
            c=max(c,count);
        }
        return c+1;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
