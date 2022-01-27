#include<bits/stdc++.h>
using namespace std;

bool saveIronman(string ch);


int main()
{
    int t,b,c,d,e,f,g,h;
    cin>>t;
    char cc;
    cc = getchar();
    
    while(t--)
    {
        string ch;
        getline(cin,ch);
        
        if(saveIronman(ch)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        
    }
}
// } Driver Code Ends



bool saveIronman(string ch)
{
    int i=0;
    int j=ch.length()-1;
    while(i<j)
    {
        while(i<j && !isalpha(ch[i]) && !isdigit(ch[i]))
        {
            i++;
        }
        while(i<j && !isalpha(ch[j]) && !isdigit(ch[j]))
        {
            j--;
        }
        if(i<j && tolower(ch[i])!=tolower(ch[j]))
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
    
}
