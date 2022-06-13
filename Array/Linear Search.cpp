//O(n)
int main() {
    int n;
    cin >> n;
    int a[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //Linear search
    int key,k;
    cin>>key; //key
    for(k=0;k<n;k++){
        if(a[k]==key){
            cout<<"Found at position: "<<k;
            break;
        }
    }
    if(k==n){
        cout<<"Not found";
    }
}
