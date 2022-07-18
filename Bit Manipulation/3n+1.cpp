#include <iostream>
using namespace std;
#define INT_SIZE 32
 
int getSingle(int arr[], int n)
{
    // Initialize result
    int result = 0;
 
    int x, sum;
 
    // Iterate through every bit
    for (int i = 0; i < INT_SIZE; i++) {
 
        // Find sum of set bits at ith position in all
        // array elements
        sum = 0;
        x = (1 << i);
        for (int j = 0; j < n; j++) {
            if (arr[j] & x)
                sum++;
        }
 
        // The bits with sum not multiple of 3, are the
        // bits of element with single occurrence.
        if ((sum % 3) != 0)
            result |= x;
    }
 
    return result;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = getSingle(a,n);
    cout<<ans<<endl;
}
