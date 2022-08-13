The structure to use is as follows
struct val{
	int first;
	int second;
};*/

class Solution{
public:
    /*You are required to complete this method*/
    static bool comp(struct val v1,struct val v2)
    {
        return v1.second<v2.second;
    }
    int maxChainLen(struct val p[],int n)
    {
        sort(p,p+n,comp);
        int cnt=1,j=0,temp=p[0].second;
        for(int i=1;i<n;i++){
            if(temp<p[i].first){
                ++cnt;
                temp=p[i].second;
            }
        }
        return cnt;
    }
};
