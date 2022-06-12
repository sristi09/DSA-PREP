#include<iostream>
using namespace std;
int main() {
	int row,n,i, count=1;
	cin >> n;
	for(row=1;row<=n;row++) {
		for(i=0;i<row;i++) {
			cout << count <<"\t";
            count++;
		}
		cout<<endl;
	}
	return 0;
}
