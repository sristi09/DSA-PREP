//Given an array nums[] of size n, construct a Product Array P (of same size n) such that P[i] is equal to the product of all the elements of nums except nums[i].
//O(n) tc
//O(n) sc

 vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here       
        vector<long long int> ans;
        long long int p=1;
        int c =0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
            else{
                p=p*nums[i];
            }
        }
        for(int i=0;i<n;i++){
            if(c==1){
                if(nums[i]==0){
                    ans.push_back(p);
                }
                else{
                    ans.push_back(0);
                }
            }
            if(c>1){
                ans.push_back(0);
            }
            else if(c==0){
                ans.push_back((p/nums[i]));
            }
        }
        return ans;
        
    }
