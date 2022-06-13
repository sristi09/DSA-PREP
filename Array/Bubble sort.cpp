//Time Complexity O(n^2)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Bubble sort 
    int k;
    for(int j=0;j<=n-1;j++){
        for(k=0;k<=n-2-j;k++){
            if(a[k]>a[k+1]){
                swap(a[k],a[k+1]);
            }
        }
    }
      for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
