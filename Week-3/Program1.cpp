#include <unordered_map>
#include <vector>
#include<iostream>



using namespace std;

class Solution {
  public:
        if (arr1.size() != arr2.size()) {
            return false;
        }

        unordered_map<int, int> freqMap;
        for (int num : arr1) {
            freqMap[num]++;
        }

        for (int num : arr2) {
            if (freqMap.find(num) != freqMap.end()) {
                freqMap[num]--;
                if (freqMap[num] == 0) {
                    freqMap.erase(num);
                }
            } else {
                return false;
            }
        }
        return freqMap.empty();
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {1, 2, 5, 4, 0};
    vector<int> arr2 = {2, 4, 5, 0, 1};
    bool result = sol.check(arr1, arr2);
    cout << boolalpha << result << endl;

    arr1 = {1, 2, 5};
    arr2 = {2, 4, 15};
    result = sol.check(arr1, arr2);
    cout << boolalpha << result << endl;

    return 0;
}

