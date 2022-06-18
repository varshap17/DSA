int transfigure (string A, string B)
    {
    	vector<int> cnt1(256 , 0);
       for(int i = 0; i < A.size(); i++)
       {
               cnt1[A[i]]++;
               cnt1[B[i]]--;
       }
       for(int i = 0; i < 256; i++)
       {
           if(cnt1[i]!=0)
               return -1;
       }
  
       int i=A.size()-1;
       int j=B.size()-1;
       int count=0;
       
       while(i>=0 and j>=0)
       {
           if(A[i]!=B[j])
           {
               count++;
               i--;
           }
           else
           {
               i--;
               j--;
           }
       }
       return count;
    }
