
#include <iostream>
using namespace std;
int main(){
    int i,j,star=1,k;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            cout<<" ";
            }
        for(k=1;k<=star;k++){
        cout<<"*";
        }
    cout<<endl;
    star=star+2;
    }
}
