#include <iostream>
using namespace std;

int sum_of_digits(int n){

    int ans = 0;
    while(n){
        int digit = n%10;
        n = n/10;
        ans += digit;
    }

    return ans;
}

int prime(int n){
    int ans = 0;

    for(int i=2;i*i<=n;i++){
        while(n%i == 0){
            n /= i;
            ans += sum_of_digits(i);
        }
    }

    //A Boston number is a composite number
    if(ans == 0){
        return ans;
    }

    if(n>1){
        ans += sum_of_digits(n);
    }

    return ans;
}

int main() {

    int n;
    cin>>n;

    int sumprime = prime(n);
    int sumn  = sum_of_digits(n);

    if(sumprime == sumn){
        cout<<1;
    }else{
        cout<<0;
    }
 
    return 0;
}
