#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin >>n1>>n2;
	for(int i=n2;;i++) {
		if(i%n1==0&&i%n2==0){
			cout<<i;
			break;
		}
	}
	return 0;
}
