#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n,d=0;
	int sum=0;
	int temp=0;
	cin >> n;
	while(n>0) {
		temp = n%10;
		n = n/10;
		sum = sum + temp * pow(2,d);
		d++;
	}
	cout << sum;
	return 0;
}
