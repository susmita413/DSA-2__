//gpt
// Created by User on 1/29/2024.
//
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void generate_permutation(vector<char>& s, int left, int right) {
    if (left == right) {
        for (char ch : s) {
            cout << ch;
        }
        cout << endl;
        return;
    }

    unordered_set<char> swapped;

    for (int i = left; i < right; ++i) {
        if (swapped.find(s[i]) != swapped.end()) {
            continue;  // Skip if the character has already been swapped
        }
        swapped.insert(s[i]);

        swap(s[left], s[i]);  // swap
        generate_permutation(s, left + 1, right);
        swap(s[left], s[i]);  // swap
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    vector<char> stringVec(input.begin(), input.end());
    generate_permutation(stringVec, 0, stringVec.size());
    return 0;
}