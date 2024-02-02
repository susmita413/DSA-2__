//
// Created by User on 1/29/2024.
//
#include <iostream>
using namespace std;

int permutation (int n, int r) {
    int sum=1;
    for (int i=n; i>n-r; i--) {
        sum=sum*i;
    }
    return sum;
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << "Permutation: " << permutation(n,r);
}