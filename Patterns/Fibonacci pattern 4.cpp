#include<iostream>
using namespace std;
int main() {
	int a=0;
	int b=1;
	int nn=0;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			if(i==1) {
				cout << a;
                break;
			}
			if(i==2 && j==0) {
				cout << b << "\t";
                continue;
			}
			nn = a+b;
			a = b;
			b = nn;
			cout << nn << "\t";
		}
		cout<<endl;
	}
	return 0;
}
