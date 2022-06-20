//sort 0,1,2 
//using 2 passes:
void sortArr(int arr[], int n)
{
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;
 
    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++) {
        switch (arr[i]) {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }
 
    // Update the array
    i = 0;
    // Store all the 0s in the beginning
    while (cnt0 > 0) {
        arr[i++] = 0;
        cnt0--;
    }
    // Then all the 1s
    while (cnt1 > 0) {
        arr[i++] = 1;
        cnt1--;
    }
    // Finally all the 2s
    while (cnt2 > 0) {
        arr[i++] = 2;
        cnt2--;
    }
 
    // Print the sorted array
    printArr(arr, n);
}

//Using only 1 pass
//put all zeroes in the start and all 2s at the end of array 
//all 1s automatically in middle
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0;
        int mid=0;  //checking pointer
        int n= nums.size();
        int high=n-1;
        while(mid<=high) {
            if(nums[mid]==0) {
                swap(nums[mid],nums[low]);
                mid++;
                low++;
                continue;
            }
            if(nums[mid]==1) {
                mid++;
                continue;
            }
            if(nums[mid]==2) {
                swap(nums[mid],nums[high]);
                high--;   //dont increment middle because it could be a 0 that was swapped 
                continue;
            }
        }
        for(int i=0;i<n;i++) {
            cout<<nums[i]<<" ";
        }
    }
};
