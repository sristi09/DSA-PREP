//Optimized soln using recursion

int countSetBits(int n)
    {
        // Your logic here
        int count =0;
			while(n>=1) {
				if(n==1){
				count++;
				break;
				}
			    int k = log2(n);
			    int power = pow(2,k);
			    count+=(n+1)+(k-2)*(power/2);
			    n=n-power;
			}
		
		return count;
    }

//Not optimized basic soln

#include<iostream>
using namespace std;
int main() {
	int test;
	cin>>test;
	for(int k=0;k<test;k++){
		int a,b,no,count=0;
		cin>>a>>b;
		for(int i=a;i<b+1;i++){
			no =i;
			while(no>0) {
				if((no&1)==1){
				count++;
				}
			no = (no>>1);
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
