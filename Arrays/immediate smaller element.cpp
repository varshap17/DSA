void immediateSmaller(int *arr, int n) 
	{
	    for(int i=0;i<n-1;i++)
	    {
            arr[i] = (arr[i] > arr[i+1])?arr[i+1]:-1;
	    }
        arr[n-1] = -1;
	}
