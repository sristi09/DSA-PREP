//factorial of very large number
vector<int> factorial(int N){
        // code here
        vector<int> v;
        if(N==0) {
            return v;
        }
        v.push_back(1);
        int carry=0;
        int j,prod;
        for(int i =2;i<=N;i++) {
            for(j=0;j<v.size();j++) {
                prod=v[j]*i +carry;
                v[j]=prod%10;
                carry=prod/10;
            }
            while(carry>0){
                v.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
