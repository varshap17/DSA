

 // } Driver Code Ends
class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            int d=INT_MAX;
            sort(arr,arr+n);
            int msum=0;
            int l=0;
            int r=n-1;
            while(l<r)
            {
                int sum=arr[l]+arr[r];
                if(abs(sum)==abs(msum))
                {
                    msum=max(msum,sum);
                }
                if(abs(sum)<d)
                {
                    d=abs(sum);
                    msum=sum;
                }
                if(sum<0)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            return msum;
        }
};

// { Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}  // } Driver Code Ends
