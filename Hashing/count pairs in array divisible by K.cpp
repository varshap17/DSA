long long countKdivPairs(int A[], int n, int K)
    {
        long long count=0;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int rem=A[i]%K;
            if(rem!=0)
            {
                count+=m[K-rem];
            }
            else
            {
                count+=m[0];
            }
            m[rem]++;
        }
        return count;
    }
