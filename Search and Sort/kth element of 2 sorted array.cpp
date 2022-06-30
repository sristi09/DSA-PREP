int kthElement(int arr1[], int arr2[], int n, int m, int key)
    {
        int i,j,k;
        int ans;
	    i=n-1;
	    j=0;
	    while(i>=0&&j<m) {
	        if(arr1[i]==arr2[j]){
	            i--;
	        }
	        else if(arr1[i]>arr2[j]) {
	            swap(arr1[i],arr2[j]);
	            j++;
	        }
	        else{
	            i--;
	        }
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    if(key<=n){
	        ans=arr1[key-1];
	    }
	    else{
	        ans=arr2[key-n-1];
	    }
	    return ans;
    }
