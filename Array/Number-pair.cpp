//2 pointer helps reduce time complexity to O(n) from O(n2) only if array sorted
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
