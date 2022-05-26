void reArrange(int arr[], int N) 
    {
        int i=0,j=1;
        while(i<N && j<N)
        {
            if(arr[i]%2==0)
            {
                i=i+2;
            }
            if(arr[j]%2!=0)
            {
                j=j+2;
            }
            else if(arr[i]%2==1 && arr[j]%2==0)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i+=2;
                j+=2;
            }
        }
    }
