#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Insertion sort
    int k;
    for(int j=0;j<n;j++){
        int key = a[j];
        for(k=j-1;j>=0 && a[k]>key;k--){
            a[k+1]=a[k];
        }
        a[k+1]=key;
    }
      for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
