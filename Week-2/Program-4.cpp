#include<iostream>
using namespace std;

void printNumbers(int count,int n){
    if(count>n) return;
    cout<<count<<" ";
    printNumbers(++count,n);
}

int main(){
    int n;
    cout<<"Enter the last number : ";
    cin>>n;
    printNumbers(1,n);
}
