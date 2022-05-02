class Solution{
public:
	
	int countSubstr (string s)
	{
	    int c=0;
	    int n=s.length();
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            c++;
	        }
	    }
	    return (c*(c-1))/2;
	}
};
