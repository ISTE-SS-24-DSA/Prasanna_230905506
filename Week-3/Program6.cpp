#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    int findFloor(vector<long long> v, long long n, long long x) {
        int left = 0, right = n - 1;
        int floorIndex = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (v[mid] == x) {
                return mid;
            }
            else if (v[mid] < x) {
                floorIndex = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return floorIndex;
    }
};

int main() {
    Solution sol;

    // Test case 1
    vector<long long> arr1 = {1, 2, 8, 10, 11, 12, 19};
    long long n1 = arr1.size();
    long long x1 = 0;
    cout << "Test case 1: " << sol.findFloor(arr1, n1, x1) << endl;

    // Test case 2
    vector<long long> arr2 = {1, 2, 8, 10, 11, 12, 19};
    long long n2 = arr2.size();
    long long x2 = 5;
    cout << "Test case 2: " << sol.findFloor(arr2, n2, x2) << endl;

    // Test case 3
    vector<long long> arr3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    long long n3 = arr3.size();
    long long x3 = 6;
    cout << "Test case 3: " << sol.findFloor(arr3, n3, x3) << endl;

    // Test case 4
    vector<long long> arr4 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    long long n4 = arr4.size();
    long long x4 = 15;
    cout << "Test case 4: " << sol.findFloor(arr4, n4, x4) << endl;

    // Test case 5
    vector<long long> arr5 = {1, 3, 5, 7, 9};
    long long n5 = arr5.size();
    long long x5 = 8;
    cout << "Test case 5: " << sol.findFloor(arr5, n5, x5) << endl;

    return 0;
}

