//90 degree anticlockwise
#include<iostream>
using namespace std;
int main () {
	int m,n;
	cin >>m;
	int a[m][m];
	int i,j;
	for(i=0;i<m;i++) {
		for(j=0;j<m;j++) {
			cin >> a[i][j];
		}
	}
	for(i=0;i<m;i++) {
		j=0;
		int k=m-1;
		while(j<=k){
			swap(a[i][j],a[i][k]);
			j++;
			k--;
		}
	}
	for(i=0;i<m;i++) {
		for(j=i;j<m;j++) {
			swap(a[i][j],a[j][i]);
		}
	}
	for(i=0;i<m;i++) {
		for(j=0;j<m;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
