#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[1000];
	cin>>a;
	int n = strlen(a);
	int i=0, j=1;
	while(j<n){
		if(a[i]!=a[j]){
			i++;
			a[i] = a[j];
		}
		j++;
	}
	a[i+1]='\0';
	cout<<a;
	return 0;
}
