//2 pointer helps reduce time complexity to O(n) from O(n2) only if array sorted and there are only unique values in array
#include <iostream>
using namespace std;
int main() {
    int a[10] = {1,2,3,4,5,6,7,8,10};
    int sum;
    int n=9;
    cin >> sum;
    int x=0;
    int i=0;
    int j=n-1;
    while(i<j) {
        x=a[i]+a[j];
        if(x==sum){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(x>sum){
            j--;
        }
        else{
            i++;
        }
    }
}

//better approach Time Complexity = O(n*logn) ~ O(n)
int getPairsCount(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        sort(arr, arr + n);
    int x = 0, c = 0, y, z;
    for (int i = 0; i < n - 1; i++) {
        x = k - arr[i];
       
        // Lower bound from i+1
        int y = lower_bound(arr + i + 1,
                            arr + n, x) - arr;
         
        // Upper bound from i+1
        int z = upper_bound(arr + i + 1,
                            arr + n, x) - arr;
        c = c + z - y;
    }
    return c;
    }


//best approach is using map
