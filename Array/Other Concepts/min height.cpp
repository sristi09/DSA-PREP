int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int ans = arr[n-1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n-1] - k;
        int mn,mx;
        for(int i=0;i<n;i++) {
            mn = min(smallest,arr[i+1]-k); //greedy
            mx = max(largest,arr[i]+k);
            if(mn<0){
                continue;
            }
            ans = min(ans,(mx-mn));   //greedy
        }
        return ans;
        
    }
