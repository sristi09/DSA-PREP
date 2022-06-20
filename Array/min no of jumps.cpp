int minJumps(int arr[], int n){
        // Your code here
        int count=0;
        int mx =0;
        int cur =0;
        for(int i=0;i<n-1;i++){
            mx = max(mx,arr[i]+i);
            if(i==cur) {
                cur = mx;
                count++;
            }
           
            }
             if(cur<n-1){
                return -1;
        }
        
        
        return count;
    }
