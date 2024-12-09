

// Permutations for the strings

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to print permutations of a given string

void printPermutation(string perm) {
    cout << perm << endl;
    return;
}

// Function to generate permutations of a given string

void generatePermutations(string str, int idx, string perm) {
    if (idx == str.length()) {
        printPermutation(perm);
        return;
    }

    for (int i = idx; i < str.length(); i++) {
        swap(str[idx], str[i]);
        generatePermutations(str, idx + 1, perm + str[idx]); // Recursive call to generate permutations for the remaining characters
        // Backtrack to restore the original string
        swap(str[idx], str[i]); // Backtrack
    }
}

int main() {
    string str = "ABC";
    generatePermutations(str, 0, "");
    return 0;
}