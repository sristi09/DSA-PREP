//Given an array A containing 2*N+2 positive numbers,
//out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct.
//Find the other two numbers.

vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
         vector<int> v={0,0};
      int gt=0;
      for(int i=0; i<nums.size(); i++){
          gt=gt^nums[i];
      }
      int j=0;
       for(int i=0; i<31; i++ ){
           if((gt&(1<<i))!=0){
               j=i;
               break;
           }
       }
        for(int i=0; i<nums.size(); i++){
            if((nums[i]&(1<<j))==0){
                v[0]=v[0]^nums[i];
            }else{
                v[1]=v[1]^nums[i];
            }
   }
   if(v[0]>v[1]) swap(v[0],v[1]);
   return v;
    }
