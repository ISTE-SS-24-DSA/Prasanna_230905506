#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vect;
    int n,i=0,input=0;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : ";
    for(i=0;i<n;i++){
        cin>>input;
        vect.push_back(input);
    }


    //Vector sorted in Ascending order
    sort(vect.begin(),vect.end());

    cout<<"Sorted Array = ";
    for(i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }
    cout<<endl;


    //Vector sorted in Descending order
    sort(vect.begin(), vect.end(), greater<int>());
    cout<<"Sorted Vector in descending order = ";
    for(i=0;i<n;i++){
        cout<<vect[i]<<" ";
    }

}
