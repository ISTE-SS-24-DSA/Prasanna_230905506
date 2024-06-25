#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the keys and their corresponding values: ";
    map<string, int> key_value_pairs;
    for(int i = 0; i < n; i++){
        string key;
        int value;
        cin >> key >> value;
        key_value_pairs[key] = value;
    }

    string S;
    cout << "Enter the key S: ";
    cin >> S;

    auto it = key_value_pairs.find(S);
    if(it != key_value_pairs.end()){
        cout << "Value of key " << S << " is " << it->second << endl;
    }
    else{
        cout << "Key " << S << " not found" << endl;
    }

    return 0;
}
