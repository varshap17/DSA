string FirstNonRepeating(string A)
		{
		    map<char,int> m;
		    queue<char> q;
		    string ans="";
		    int n=A.length();
		    for(int i=0;i<n;i++)
		    {
		        char ch=A[i];
		        m[ch]++;
		        q.push(ch);
		        while(!q.empty())
		        {
		            if(m[q.front()]>1)
		            {
		                q.pop();
		            }
		            else
		            {
		                ans.push_back(q.front());
		                break;
		            }
		        }
		        if(q.empty())
		        {
		            ans.push_back('#');
		        }
		    }
		    return ans;
		}
