//adjacent elements shouldnt be used to find sum


        int secondlast = arr[0];
        int last = max(arr[0], arr[1]);
        if(n==1)
            return secondlast;
        int curr = last;
        for(int i=2; i<n; i++){
            curr = max(last, arr[i]+secondlast);
            secondlast = last;
            last = curr;
        }
        return curr;
