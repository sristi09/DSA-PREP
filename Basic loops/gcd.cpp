#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin >> n1>>n2;
	int gcd,max=1;
	for(int i=1;i<=n1;i++){
		if(n1%i==0&&n2%i==0){
			max=i;
		}
	}
	cout<<max;
	return 0;
}
