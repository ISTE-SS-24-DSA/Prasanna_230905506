#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void frequencyCount(vector<int>& arr, int N, int P) {
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] <= N) {
            freq[arr[i]]++;
        }
    }

    for (int i = 1; i <= N; ++i) {
        if (freq.find(i) != freq.end()) {
            arr[i - 1] = freq[i];
        } else {
            arr[i - 1] = 0;
        }
    }
}

int main() {
    int N = 5;
    vector<int> arr = {2, 3, 2, 3, 5};
    int P = 5;

    frequencyCount(arr, N, P);

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
