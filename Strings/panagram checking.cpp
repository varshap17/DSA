class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string &str) 
    {
        int arr[26]={0};
        int n=str.length();
        for(int i=0;i<n;i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                arr[str[i]-'a']=1;
            }
            if(str[i]>='A' && str[i]<='Z')
            {
                arr[str[i]-'A']=1;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==0)
            {
                return false;
            }
        }
        return true;
    }

};
