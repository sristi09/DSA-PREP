//O(N2), 3 loops generalized way
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void targetSumTriple(int arr[], int n, int target)
{   for(int i=0;i<n-2;i++){      //keeping one part of triplet fixed and then using 2 pointers in remaining sorted array
        int left = i+1;
        int right = n - 1;
        while (left < right)
        {   int sum=0;
            sum = arr[left] + arr[right];
            if (sum > target-arr[i])
            {
                right--;
            }
            else if (sum < target-arr[i])
            {
                left++;
            }
            else
            {
                cout<<arr[i]<<", " << arr[left] << " and " << arr[right] << endl;
                left++;
                right--;
            }
        }
}
    
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
    sort(arr,arr+n);
	int target;
	cin>>target;
	targetSumTriple(arr,n,target);
	return 0;
}
