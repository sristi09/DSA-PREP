#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin >>m>>n;
	int a[m][n];
	int i,j;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			cin >> a[i][j];
		}
	}
	for(i=0;i<n;i++){
		if(i%2==0){
			for(j=0;j<m;j++){
				cout<<a[j][i]<<", ";
			}
		}
		else{
			for(j=m-1;j>=0;j--) {
				cout<<a[j][i]<<", ";
			}
		}
	}
	cout<<"END";
	return 0;
}
