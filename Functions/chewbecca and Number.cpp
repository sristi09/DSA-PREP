/*
Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

Input Format
The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

Constraints
x <= 100000000000000000

Output Format
Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

Sample Input
4545
Sample Output
4444
Explanation
There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.
*/

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	int temp;
    long long int sum=0;
    long long int no;
	int i=0;
    int d=0;
	if(n>1){
        no=n;
        while(no>0){
            no=no/10;
            d++;
        }
		while(n>0){
			temp = n%10;
			n = n/10;
            if(temp>4){
                temp=9-temp;
            }
			if(i==(d-1) && temp==0){
				temp=9-temp;
			}
			sum = sum + temp*pow(10,i);
			i++;
		}
        cout<<sum;
	}
	else{
		cout<<"1";
		return 0;
	}
	return 0;
}
