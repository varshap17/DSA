using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	string findSum(string s1, string s2) 
	{
	    reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	int m=s1.length();
	int n=s2.length();
	int i=0,j=0;
	int carry=0;
	string ans="";
	while(i<m && j<n)
	{
		int x=s1[i]-'0';
		int y=s2[j]-'0';
		int z=x+y+carry;
		int c=z%10;
		carry=z/10;
		ans.push_back(c+'0');
		i++;
		j++;
	}
	while(i<m)
	{
		int x=s1[i]-'0';
		int z=x+carry;
		int c=z%10;
		carry=z/10;
		ans.push_back(c+'0');
		i++;
	}
	while(j<n)
	{
		int y=s2[j]-'0';
		int z=y+carry;
		int c=z%10;
		carry=z/10;
		ans.push_back(c+'0');
		j++;
	}
	if(carry==1)
	{
		ans.push_back('1');
	}
	reverse(ans.begin(),ans.end());
	int sum=0;
	for(int i=0;i<ans.length();i++)
	{
	    if(ans[i]!='0')
	    {
	        return ans.substr(i);
	    }
	}
	return "0";
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string x, y;
   		cin >> x >> y;
        Solution ob;
   		cout << ob.findSum(x, y) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
