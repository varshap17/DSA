string addBinary(string A, string B)
	{
	    int n=A.length();
	    int m=B.length();
	    int c=0;
	    int i=0;
	    int j=0;
	    reverse(A.begin(),A.end());
	    reverse(B.begin(),B.end());
	    string ans="";
	    while(i<n && j<m)
	    {
	        int l=A[i]-'0';
	        int r=B[j]-'0';
	        int sum=l+r+c;
	        ans+=((sum%2)+'0');
	        c=sum/2;
	        i++;
	        j++;
	    }
	    while(i<n)
	    {
	        int l=A[i]-'0';
	        int sum=l+c;
	        ans+=((sum)%2)+'0';
	        c=sum/2;
	        i++;
	    }
	    while(j<m)
	    {
	        int l=B[j]-'0';
	        int sum=l+c;
	        ans+=((sum)%2)+'0';
	        c=sum/2;
	        j++;
	    }
	    if(c==1)
	    {
	        ans+='1';
	    }
	    reverse(ans.begin(),ans.end());
	    string temp="";
	    int h=0;
	    while(ans[h]=='0')
	    {
	        h++;
	    }
	    temp=ans.substr(h);
	    return temp;
	}
