bool findPair(int arr[], int size, int n){
    //code
    sort(arr,arr+size);
     int i=0;
   int j=1;
   while(i<size&&j<size){
       if(abs(arr[j]-arr[i])==n&&i<=j&&abs(arr[i]-arr[j])==n){
           return true;
       }
       else if(abs(arr[j]-arr[i]<n)){
           j++;
       }
       else{
           i++;
       }
      if(i==j){
           i--;
           j++;
       }
   }
   return false;
    }
