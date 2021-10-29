
 // } Driver Code Ends
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        int p=1<<K;
        return N|p;
    }
    
};




// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
