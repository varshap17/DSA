
int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) 
{
    int l[n]={0};
    int h[n]={0};
    int ma=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=ma)
        {
            ma=arr[i];
            l[i]=ma;
        }
    }
    int mi=INT_MAX;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<=mi)
        {
            mi=arr[i];
            h[i]=mi;
        }
    }
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]==l[i] && arr[i]==h[i])
        {
            return arr[i];
        }
    }
    return -1;
}
