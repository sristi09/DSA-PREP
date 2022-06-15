#include<iostream>
using namespace std;

void recursiveReverse(int a[],int n, int b[], int start) {
	if(start>=n){
        for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
        }
		return;
    }
    else{
	int temp;
	temp = a[start];
	b[temp] = start;
	recursiveReverse(a,n,b,start+1);
    }
}
int main() {
	int n;
    cin >> n;
    int a[n];
    int b[n];
	int start=0;
	for(int i=0;i<n;i++){
        cin>>a[i];
	}
    recursiveReverse(a,n,b,start);

	return 0;
}
