#include <iostream>
using namespace std;
int main() {
    int i,j,n;
    j=1;
    cin >> n;
    for(i=0;i<n;i++) {
        if(i==0) {
            while(j<=2*n-1) {
                cout << "*";
                j++;
            }
            cout<<endl;
            continue;
        }
        for(int k=0;k<n-i;k++) {
            cout << "*";
        }
        for(int s=0;s<2*i-1;s++) {
            cout<< " ";
        }
        for(int k=0;k<n-i;k++) {
            cout << "*";
        }
        cout<<endl;

    }
    j=1;
    for(i=2;i<=n;i++) {
        if(i==n) {
            while(j<=2*n-1) {
                cout << "*";
                j++;
            }
            cout<<endl;
            break;
        }
        for(int k=0;k<i;k++) {
            cout << "*";
        }
        for(int s=0;s<2*n-(2*i+1);s++) {
            cout<< " ";
        }
        for(int k=0;k<i;k++) {
            cout << "*";
        }
        cout<<endl;
    }


}
