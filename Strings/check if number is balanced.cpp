class Solution{
public:	
	bool balancedNumber(string N)
	{
	    int n=N.length();
	    int i=0;
	    int j=n-1;
	    int sum1=0;
	    int sum2=0;
	    while(i<j)
	    {
	        sum1=sum1+(N[i]-'0');
	        sum2=sum2+(N[j]-'0');
	        i++;
	        j--;
	    }
	    if(sum1==sum2)
	    {
	        return true;
	    }
	    else
	    {
	        return false;
	    }
	}
};
