/*
Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?

Input Format
The first line contains N , then N integers follow each denoting the number of the car.

Constraints
N<=1000 Car No >=0 && Car No <=1000000000

Output Format
N lines each denoting "Yes" or "No" depending upon whether that car will be allowed on Sunday or Not !

Sample Input
2
12345
12134
Sample Output
Yes
No
Explanation
1 + 3 + 5 = 9 which is divisible by 3
1 + 1 + 3 = 5 which is NOT divisible by 3 and 2+4 = 6 which is not divisble by 4.
*/
#include<iostream>
using namespace std;
int main() {
	int N;
    cin>>N;
	for(int i=0;i<N;i++){
		int n;
		int temp;
		int even,odd;
        even=0;
        odd=0;
		cin>>n;
		while(n>0){
			temp = n%10;
			n=n/10;
			if(temp%2==0){
				even = even + temp;
			}
			else{
				odd=odd+temp;
			}
		}
		if(odd%3==0||even%4==0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
