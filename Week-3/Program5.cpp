#include <iostream>
using namespace std;

class Solution {
public:
    // Function to find element in sorted array using binary search
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {
        int left = 0, right = N - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == K) {
                return 1;
            }
            else if (arr[mid] < K) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;

    // Test case 1
    int arr1[] = {1, 3, 4, 5, 6};
    int N1 = sizeof(arr1) / sizeof(arr1[0]);
    int K1 = 2;
    cout << "Test case 1: " << sol.searchInSorted(arr1, N1, K1) << endl;

    // Test case 2
    int arr2[] = {1, 2, 3, 4, 6};
    int N2 = sizeof(arr2) / sizeof(arr2[0]);
    int K2 = 6;
    cout << "Test case 2: " << sol.searchInSorted(arr2, N2, K2) << endl;

    // Test case 3
    int arr3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N3 = sizeof(arr3) / sizeof(arr3[0]);
    int K3 = 5;
    cout << "Test case 3: " << sol.searchInSorted(arr3, N3, K3) <<endl;

    // Test case 4
    int arr4[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int N4 = sizeof(arr4) / sizeof(arr4[0]);
    int K4 = 7;
    cout << "Test case 4: " << sol.searchInSorted(arr4, N4, K4) << endl;

    // Test case 5
    int arr5[] = {1, 1, 1, 1, 1};
    int N5 = sizeof(arr5) / sizeof(arr5[0]);
    int K5 = 1;
    cout << "Test case 5: " << sol.searchInSorted(arr5, N5, K5) << endl;

    // Test case 6
    int arr6[] = {1, 3, 5, 7, 9};
    int N6 = sizeof(arr6) / sizeof(arr6[0]);
    int K6 = 8;
    cout << "Test case 6: " << sol.searchInSorted(arr6, N6, K6) << endl;

    return 0;
}

