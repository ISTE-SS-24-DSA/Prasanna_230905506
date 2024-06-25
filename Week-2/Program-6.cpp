#include<iostream>
using namespace std;

int sum(int n){
    if(n==0) return n;
    return n+sum(n-1);
}

int main(){
    int total,n;
    cout<<"Enter a number : ";
    cin>>n;
    total=sum(4);
    cout<<"Sum = "<<total;
}
