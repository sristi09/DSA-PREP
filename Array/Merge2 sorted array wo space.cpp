//if arrays are provided not vectors
//use sorting in end
//1st pointer points to end of A1 and 2nd points to start of A2
//print both arrays in end
void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i,j,k;
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
      cout<<arr1<<arr2;
	}

//if vectors are provided
//Pointer n1 will point to the end of nums1,i.e. index 2, pointer n2 will point to the end of nums2 and pointer traverse will be used for traversing nums1 from the back and storing values at those indexes.
//no need to sort

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=nums1.size()-1;
        while(k>=0) {
            if(i<0) {     //if A1 is empty 
                nums1[k--]=nums2[j--];
            }
            else if(j<0){   //if A2 is empty
                nums1[k--]=nums1[i--];
            }
                else{
                    if(nums1[i]>nums2[j]){
                    nums1[k--]=nums1[i];
                    i--;
                }
                else{
                    nums1[k--]=nums2[j];
                    j--;
                }
            }
            
            
        }
    }
};
