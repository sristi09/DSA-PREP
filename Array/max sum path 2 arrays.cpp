/*
You are provided two sorted arrays. You need to find the maximum length of bitonic subsequence. You need to find the sum of the maximum sum path to reach from beginning of any array to end of any of the two arrays. You can switch from one array to another array only at common elements.

Input Format
First line contains integer t which is number of test case. For each test case, it contains two integers n and m which is the size of arrays and next two lines contains n and m space separated integers respectively.

Constraints
1<=t<=100 1<=n,m<=100000

Output Format
Print the maximum path.

Sample Input
1
8 8
2 3 7 10 12 15 30 34
1 5 7 8 10 15 16 19
Sample Output
122
Explanation
122 is sum of 1, 5, 7, 8, 10, 12, 15, 30, 34
*/

// use merge sort concept

#include<iostream>
using namespace std;
int max(int a, int b) {
	return (a>b? a:b);
}
int main() {
	int test;
	cin >> test;
	for(int i=0;i<test;i++) {
		int m,n;
		cin>>m>>n;
		int a[m], b[n];
		int j;
		for(j=0;j<m;j++){
			cin>>a[j];
		}
		for(j=0;j<n;j++){
			cin>>b[j];
		}
		int sum1=0, sum2=0, result=0;
		int k=0, l=0;
		while(k<m && l<n) {
			if(a[k]<b[l]){
				sum1 += a[k];
				k++;
			}
			else if(a[k]>b[l]) {
				sum2 += b[l];
				l++;
			}
			else {
				result = result + max(sum1,sum2)+a[k];
				sum1 =0;
				sum2 =0;
				l++;
				k++;
			}
		}
		while(k<m) {
			sum1 += a[k++];
		}
		while(l<n) {
			sum2 += b[l++];
		}
		result += max(sum1,sum2);
		cout<<result<<endl;
	}
	return 0;
}
