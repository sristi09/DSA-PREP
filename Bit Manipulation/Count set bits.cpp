int setBits(int N) {
        // Write Your Code here
        int ans=0;
        while(N>0){
            if((N & 1)==1){
                ans++;
            }
            N = (N>>1);
        }
        return ans;
    }
