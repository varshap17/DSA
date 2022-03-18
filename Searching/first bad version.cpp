// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        if(isBadVersion(1)){
            return 1;
        }
        long low=2,high=n;
        while(true){
            long mid=(low+high)>>1;
            if(isBadVersion(mid-1)){
                high=mid-1;
                continue;
            }
            
            if(!isBadVersion(mid)){
                low=mid+1;
                continue;
            }
            
            return mid;
        }
        return NULL;
    }
};
