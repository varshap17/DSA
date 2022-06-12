vector<vector<int>> dp;
	int countGroups(int position,int previous_sum,int length,string num)
	{
	    if(position==length)
	    {
	        return 1;
	    }
	    if(dp[position][previous_sum]!=-1)
	    {
	        return dp[position][previous_sum];
	    }
	    dp[position][previous_sum]=0;
	    int res=0;
	    int sum=0;
	    for(int i=position;i<length;i++)
	    {
	        sum+=(num[i]-'0');
	        if(sum>=previous_sum)
	        {
	            res+=countGroups(i+1,sum,length,num);
	        }
	    }
	    dp[position][previous_sum]=res;
	    return res;
	}
	int TotalCount(string str)
	{
	    int n=str.size();
	    dp.assign(n,vector<int>(n*9+1,-1));
	    return countGroups(0,0,n,str);
	}
