#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(8);
    s.insert(9);
    s.insert(1);

    for (auto& element : s) {
        cout << element << " ";
    }
    cout<<endl;
    auto it=s.find(6);
    if(it!=s.end()) cout<<*it<<" Found";
    else cout<<*it<<" Not Found";

    cout<<endl;

    auto it2=s.find(3);
    if(it2!=s.end()) cout<<*it2<<" Found";
    else cout<<*it2<<" Not Found";

    return 0;
}
