vector<int> numAndDen(int n, int d) 
    {
        long double val=(long double)n/(long double)d;
       
        int num=val*10000;
        int den=10000;
        
        long double mx=-1;
        vector<int>ans(2);
        
        long double temp=(long double)num/(long double)den;
        do
        {
            if(temp<val)
            {
                if(temp>mx)
                {
                    mx=temp;
                    ans[0]=num;
                    ans[1]=den;
                    
                }
                den--;
                
            }
            else
            {
                
                num--;
                
            }
            temp=(long double)num/(long double)den;
            
        }
        while(temp>=0);
        return ans;
    }
