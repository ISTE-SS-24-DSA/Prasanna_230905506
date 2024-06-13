#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vect{1,2,3,4,5,6};
    cout<<"Vector elements = ";
    for(auto it=vect.begin();it!=vect.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<"Vector elements in reverse order = ";
    for(auto it=vect.rbegin();it!=vect.rend();it++){
        cout<<*(it)<<" ";
    }

}
