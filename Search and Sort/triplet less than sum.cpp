	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	     long long ans = 0;
    sort(arr,arr+n);
    
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]+arr[i+1]+arr[i+2]<sum)
        {
            int start = i+1;
            int end = n-1;
            
            while(start < end)
            {
                if(arr[end]+arr[start] < sum-arr[i])
                {
                    ans += (end-start);
                    start++;
                }
                else 
                end--;
            }
        }
        else 
        break;
    }
    return ans;
	}
