vector<bool>isPrime(R+1, true);
		    isPrime[0] = isPrime[1] = false;
	
        	for (int i = 2; i <= R; i++)	{
        		if(isPrime[i]){
        			for (int j = 2; i*j <= R; j++)	{
        				isPrime[i*j] = false;
        			}
        		}
        	}
        	int count1 = 0, count2 = 0;
        	for (int i = L; i <= R; i++){
        	    if(i == 0 || i == 1) continue;
        		else if (isPrime[i]) count1++;
        		else count2++;
        	}
        	
        	return count2 - count1;
		}
