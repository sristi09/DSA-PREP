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
	int sc=0;
	int ec =n-1;
	int sr =0;
	int er=m-1;
	while(sc<=ec && sr<=er) {
		for(i=sr;i<=er;i++){
			cout<<a[i][sc]<<", ";
		}
		sc++;
		for(i=sc;i<=ec;i++) {
			cout<<a[er][i]<<", ";
		}
		er--;
		
		for(i=er;i>=sr;i--) {
			cout<<a[i][ec]<<", ";
			
		}
		ec--;
		
		 
		for(i=ec;i>=sc;i--) {
			cout<<a[i][sr]<<", ";
		
		}
		sr++;
		
	}
	cout<<"END";
	return 0;

}
