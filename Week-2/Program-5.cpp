#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int N) {
    for (int i = 0; i < N; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter the number of terms : ";
    cin >> N;

    cout << "Fibonacci series up to " << N << " terms:" << endl;
    printFibonacciSeries(N);

    return 0;
}
