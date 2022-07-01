int *findTwoElement(int *arr, int n) {
        // code here
        int* ans=new int(2);
        long long int sum =0;
        long long int sum1 = ((n*(n+1))/2);
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
               ans[0]=arr[i+1];
            }
        }
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        int x=sum-ans[0];
        ans[1]= sum1-x;
           
        return ans;
        }



int* ans=new int(2);
        for(int i = 0; i < n; i++){
            if(arr[abs(arr[i])-1] > 0){
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            } 
            else{
                ans[0] = abs(arr[i]);
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                ans[1] = i+1;
            }
        }
        return ans;
