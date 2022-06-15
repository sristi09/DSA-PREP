#include <iostream>
#include<climits>
using namespace std;
 void generateSubarray(int a[],int n) {  //for generating sub arrays
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                for(int k=i;k<j;k++) {
                    cout<<a[k]<<" ";
                }
                cout<<endl;
            }
        }
    }

void maxSubarray(int a[], int n) {  // for finding max sum of sub array and printing with the sum
    int max = INT_MIN;
    int sum =0;
    int c,b;
    for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                sum=0;
                for(int k=i;k<j;k++) {
                    sum = sum + a[k];
                }
                if(sum>max){
                    max=sum;
                    c = i;
                    b = j;
                }
            }
        }
        for(int i=c;i<=b;i++){
            cout<<a[i]<<" ";
        }
        cout<<max;
}

//can be optimized by using cummulative approach
//make array of cummulated sum
//sum = carray[j]+carray[i-1]
//carray[0]=0 to account for segmentation fault

int main() {
     int a[10] = {1,2,3,4,5,6,7,8,10};
     int n=9;
     maxSubarray(a,n);
   
    
}
