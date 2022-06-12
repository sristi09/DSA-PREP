#include <iostream>
using namespace std;
int traillingZeroes(int n){
    int ans=0;
    for(int i = 5;n/i>0;i*=5){
        ans+=n/i;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    cout<<traillingZeroes(n);
}
