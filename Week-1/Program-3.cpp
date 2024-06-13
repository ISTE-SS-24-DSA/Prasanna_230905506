
#include <iostream>
using namespace std;
int main(){
    int n, isPrime=1, i;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        cout<<"It is a Prime number";
    }
    else {
        cout<<"It is a composite number";
    }
}
