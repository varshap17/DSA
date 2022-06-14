string is_power_of_eight(long long int n ) 
    {
        for(int i=1;i<log2(n);i++)
        {
            if(pow(2,(3*i))==n)
            {
                return "Yes";
            }
        }
        return "No";
    }
