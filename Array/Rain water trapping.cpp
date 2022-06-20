// Time complexity = O(n^2) 
//Space = O(1)
/ Function to return the maximum
// water that can be stored
int maxWater(int arr[], int n)
{
     
    // To store the maximum water
    // that can be stored
    int res = 0;
     
    // For every element of the array
    for (int i = 1; i < n-1; i++) {
         
        // Find the maximum element on its left
        int left = arr[i];
        for (int j=0; j<i; j++)
           left = max(left, arr[j]);
         
        // Find the maximum element on its right  
        int right = arr[i];
        for (int j=i+1; j<n; j++)
           right = max(right, arr[j]);
        
       // Update the maximum water   
       res = res + (min(left, right) - arr[i]);  
    }
 
    return res;
}


// Time Complexity = O(n)
//Space Complexity = O(n)
int findWater(int arr[], int n)
{
    // left[i] contains height of tallest bar to the
    // left of i'th bar including itself
    int left[n];
 
    // Right [i] contains height of tallest bar to
    // the right of ith bar including itself
    int right[n];
 
    // Initialize result
    int water = 0;
 
    // Fill first elememt of left array same as first bar
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);   //check max b/w current bar and all the max bars before that using previous left[] element
 
    // Fill last element of right array same as last bar
    right[n - 1] = arr[n - 1];  
    for (int i = n - 2; i >= 0; i--)   //start filling from behind
        right[i] = max(right[i + 1], arr[i]); //check max b/w current bar and all max bars after that using the next right[] element
 
    // Calculate the accumulated water element by element
    // consider the amount of water on i'th bar, the
    // amount of water accumulated on this particular
    // bar will be equal to min(left[i], right[i]) - arr[i] . 
    //minimum b/w before element of left and next element of right 
    for (int i = 1; i < n-1; i++)
    {
      int var=min(left[i-1],right[i+1]);
      if(var > arr[i])
      {
        water += var - arr[i];
      }
    }
        
 
    return water;
}
