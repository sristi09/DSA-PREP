//O(n2)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Selection sort
    int k;
    for(int j=0;j<n-1;j++){
        int min = j;
        for(k=j+1;k<n;k++){
            if(a[min]>a[k]){
                min = k;
            }
        }
        swap(a[min],a[j]);
    }
      for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}


void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
