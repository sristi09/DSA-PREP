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
	int dir =0;
	int sr=0;
	int er=m-1;
	int sc=0;
	int ec=n-1;
	while(sr<=er && sc<=ec) {
		if(dir==0){
			for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<", ";
		}
			sr++;
		}
		else if(dir==1){
			for(int i=sr;i<=er;i++){
				cout<<a[i][ec]<<", ";
			}
			ec--;
		}
		else if(dir==2){
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<", ";
			}
			er--;
		}
		else if(dir==3){
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<", ";
			}
			sc++;
		}
		dir = (dir+1)%4;
	}
	cout<<"END";
	return 0;
}
