#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string str) 
        {
            int dotCount = 0;
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '.')
        {
            dotCount++;
        }
    }
    
    if(dotCount != 3)
    {
        return false;
    }
    
    stringstream ss(str);
    string temp;
    
    while(getline(ss, temp, '.'))
    {
        if(temp.size() > 3 || temp.size() == 0)
        {
            return false;
        }
        
        if(temp.size() > 1 and temp[0] == '0')
        {
            return false;
        }
        
        int num = 0;
        for(int i = 0; i < temp.size(); i++)
        {
            if(temp[i] >= '0' and temp[i] <= '9')
            {
                num = num * 10 + (temp[i] - '0');
            }
            else
            {
                return false;
            }
        }
        
        if(temp.size() > 1 and num == 0)
        {
            return false;
        }
        
        if(num >= 0 and num <= 255)
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    
    return true;
    }
};

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends
