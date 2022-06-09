class Solution {
public:
    int compareVersion(string version1, string version2) 
    {
        map<int,int> m1;
        map<int,int> m2;
        int n1=version1.length();
        int n2=version2.length();
        int i=0;
        int j=0;
        int sum1=0;
        int k=0;
        while(i<n1)
        {
            while(version1[i]!='.' && i<n1)
            {
                sum1=(sum1*10)+(version1[i]-'0');
                i++;
            }
            m1[k]=sum1;
            sum1=0;
            k++;
            i++;
        }
        int s=0;
        sum1=0;
        while(j<n2)
        {
            while(version2[j]!='.' && j<n2)
            {
                sum1=(sum1*10)+(version2[j]-'0');
                j++;
            }
            m2[s]=sum1;
            sum1=0;
            s++;
            j++;
        }
        int z;
        for(z=0;z<k && z<s;z++)
        {
            if(m1[z]<m2[z])
            {
                return -1;
            }
            else if(m1[z]>m2[z])
            {
                return 1;
            }
        }
        while(z<k)
        {
            if(m1[z]>0)
            {
                return 1;
            }
            z++;
        }
        while(z<s)
        {
            if(m2[z]>0)
            {
                return -1;
            }
            z++;
        }
        return 0;
    }
};
