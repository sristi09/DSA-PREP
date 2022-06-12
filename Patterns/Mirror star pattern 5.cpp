#include<iostream>
using namespace std;
int main() {
	int row,n,i;
	cin >> n;
	for(row=1;row<=(n+1)/2;row++) {
		for(i=0;i<(n+1)/2-row;i++) {
			cout << "\t";
		}
		for(i=1;i<=2*row-1;i++) {
			cout<<"*\t";
		}
		cout<<endl;
	}
    for(row=n/2;row>0;row--) {
		for(i=0;i<(n+1)/2-row;i++) {
			cout << "\t";
		}
		for(i=1;i<=2*row-1;i++) {
			cout<<"*\t";
		}
		cout<<endl;
	}
    
	return 0;
}
