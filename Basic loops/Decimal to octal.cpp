#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int dec,oct=0;
	int count=0;
	int rem=0;
	cin >> dec;
	while(dec>0) {
		rem = dec%8;
		dec = dec/8;
		oct = oct + rem*pow(10,count);
		count++;
	}
	cout <<oct;
	return 0;
}
