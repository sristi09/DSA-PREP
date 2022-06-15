#include<iostream>
using namespace std;

void rvereseArray(int arr[], int start, int end)   //recursive method -O(N)
{
    if (start >= end)
    return;
     
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
     
    rvereseArray(arr, start + 1, end - 1);
}   
int main() {
	int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start=0;
    int end=n-1;
    int temp;
	while(start<end) {         //Iterative method- O(N)
        temp = a[start];
        a[start] = a [end];
        a[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
	return 0;
}
