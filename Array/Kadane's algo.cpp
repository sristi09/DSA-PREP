long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int currentsum=0;
       int maxsum=INT_MIN;
       for(int i=0;i<n;i++){
           currentsum=currentsum+arr[i];
           if(currentsum>maxsum){
               maxsum=currentsum;
           }
           if(currentsum<0){
               currentsum=0;
           }
       }return maxsum;
   
        
    }

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0,
       start =0, end = 0, s=0;
 
    for (int i=0; i< size; i++ )
    {
        max_ending_here += a[i];
 
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
 
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout << "Maximum contiguous sum is "
        << max_so_far << endl;
    cout << "Starting index "<< start
        << endl << "Ending index "<< end << endl;
}
