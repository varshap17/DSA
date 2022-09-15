class Solution{
    public:
    int minSubset(vector<int> &Arr,int N)
    {
        sort(Arr.rbegin(),Arr.rend());
        long long sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=Arr[i];
        }
        int i;
        long long lsum=0;
        for(i=0;i<N;i++)
        {
            lsum+=Arr[i];
            sum-=Arr[i];
            if(lsum>sum)
            {
                return i+1;
            }
        }
        return -1;
    }
};
