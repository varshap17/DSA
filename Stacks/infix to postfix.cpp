// C++ implementation to convert infix expression to postfix
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to convert an infix expression to a postfix expression.
    int pre(char s)
    {
        if(s =='^')
        {
            return 3;
        }
        else if(s =='*' || s =='/')
        {
            return 2;
        }
        else if(s =='+' || s =='-')
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    string infixToPostfix(string s)
    {
        int l=s.length();
        string np="";
        stack <char> st;
        st.push('N');
        for(int i=0;i<l;i++)
        {
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            {
                np+=s[i];
            }
            else if(s[i]=='(')
            {
                st.push('(');
            }
            else if(s[i]==')')
            {
                while(st.top()!='N' && st.top()!='(')
                {
                    char c=st.top();
                    st.pop();
                    np+=c;
                }
                if(st.top()=='(')
                {
                    char c=st.top();
                    st.pop();
                }
            }
            else
            {
                while(st.top()!='N' && (pre(s[i])<=pre(st.top())))
                {
                    char c=st.top();
                    st.pop();
                    np+=c;
                }
                st.push(s[i]);
            }
        }
        while(st.top()!='N')
        {
            char c=st.top();
            st.pop();
            np+=c;
        }
        return np;
    }
};


// { Driver Code Starts.
//Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string exp;
        cin>>exp;
        Solution ob;
        cout<<ob.infixToPostfix(exp)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
