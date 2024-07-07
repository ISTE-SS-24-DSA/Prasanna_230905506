#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> valueEqualToIndex(vector<int>& arr) {
        vector<int> result;
        unordered_map<int, int> indexMap; // Map to store index-value pairs

        for (int i = 0; i < arr.size(); i++) {
            indexMap[i + 1] = arr[i]; // Store 1-based index as key and value as arr[i]
        }

        for (int i = 1; i <= arr.size(); i++) {
            if (indexMap.count(i) && indexMap[i] == i) {
                result.push_back(i); // Add to result if value equals 1-based index
            }
        }

        return result;
    }
};

// Example usage:
int main() {
    Solution sol;

    vector<int> arr1 = {15, 2, 45, 4, 7};
    vector<int> result1 = sol.valueEqualToIndex(arr1);
    cout << "Elements equal to their index for arr1: ";
    for (int index : result1) {
        cout << index << " ";
    }
    cout << endl; // Output: 2 4

    vector<int> arr2 = {1};
    vector<int> result2 = sol.valueEqualToIndex(arr2);
    cout << "Elements equal to their index for arr2: ";
    for (int index : result2) {
        cout << index << " ";
    }
    cout << endl; // Output: 1

    return 0;
}

