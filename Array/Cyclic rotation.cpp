//one clockwise rotation
void rotate(int arr[], int n)
{   
    int temp;
    for(int i=0;i<n;i++) {
        int temp1 = arr[i];
        if(i==0) {
            arr[i] = arr[n-1];
        }
        else {
            arr[i] = temp;
        }
        temp = temp1;
    }
    
}

//2nd approach
void rotate(int arr[], int n)
{
    for(int i = 0; i<n; i++){
        swap(arr[i], arr[n-1]);
    }
}

//for more than one rotation k=no of rotations but uses 2 arrays
void rotate(int arr[], int n)
{
   int arr2[n];
   
   for(int i=0;i<n;i++){
       arr2[(i+k)%n] = arr[i];
   }
   
   for(int i=0;i<n;i++){
       arr[i] = arr2[i];
   }
}
