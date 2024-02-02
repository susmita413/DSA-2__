// chat gpt
//
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacciSeries(int n) {
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
}

int main() {
    int n = 14; // You can change the value of 'n' to print more or fewer terms
    cout << "Fibonacci series up to " << n << " terms: ";
    printFibonacciSeries(n);
    cout << "\n";
    return 0;
}
