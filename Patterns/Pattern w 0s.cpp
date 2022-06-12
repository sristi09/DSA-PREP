#include<iostream>
using namespace std;
int main() {
	int row,n,i;
	cin >> n;
	for(row=1;row<=n;row++) {
		for(i=0;i<row;i++) {
			if(i==0 || i==(row-1)) {
				cout << row <<"\t";
			}
            else{
			    cout << "0\t";
            }
		}
		cout<<endl;
	}
	return 0;
}
