vector<int> changeBits(int N) 
    {
        int n=N;
        int p=log2(N);
        int r=pow(2,p+1)-1;
        return {r-N,r};
    }
