#include<iostream>
using namespace std;
int main() {
	int m,n;
	cin >>m>>n;
	int matrix[m][n];
	int i,j;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			cin >> matrix[i][j];
		}
	}
	int target;
	cin >> target;
		i=0;
        j = n-1;
        while(i<m && j>=0) {
            if(matrix[i][j]==target) {
				cout<<"1";
                return 0;
            }
            else if(matrix[i][j]<target) {
                i++;
            }
            else{
                j--;
            }
        }
		cout<<"0";
        return 0;
}
