#include<iostream>
#include<cmath>
using namespace std;
void arm(int n1, int n2){
	for(int i=n1;i<=n2;i++) {
		int temp,d=0;
		int sum=0;
		int no;
		int n;
        n=i;
		no=i;
		while(no>0){
			no=no/10;
			d++;
		}
		while(n>0) {
			temp = n % 10;
			n = n / 10;
			sum = sum + pow(temp,d);
		}
		if(sum==i){
			cout<<i<<endl;
		}
	}
	
}
int main() {
	int n1,n2;
	cin >> n1>>n2;
	arm(n1,n2);
	return 0;
}
