int minVal(int a, int b) 
    {
        bitset<32> b1(a);
        bitset<32> b2(b);
        int bitsA=b1.count();
        int bitsB=b2.count();
       
        int diff=abs(bitsA-bitsB);
       
        if(diff==0)
            return a;
        else if(bitsA>bitsB)
        {
           while(diff>0)
           {
               a = a&(a-1);
               diff--;
           }
       }
       else
       {
           while(diff>0)
           {
               a = a|(a+1);
               diff--;
           }
       }
       return a;
    }
