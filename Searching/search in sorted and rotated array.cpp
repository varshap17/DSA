
 // } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int h, int key)
    {
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(A[mid]==key)
            {
                return mid;
            }
            else if(A[l]<=A[mid])
            {
                if(A[l]<=key && A[mid]>=key)
                {
                    h=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            else if(A[mid]<=A[h])
            {
                if(A[mid]<=key && A[h]>=key)
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};

// { Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}  // } Driver Code Ends
