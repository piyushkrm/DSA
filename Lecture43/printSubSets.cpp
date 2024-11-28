
// Print all subsets of an array

#include <iostream>
#include <vector>

using namespace std;

// Function to print all subsets of given array
void printSubsets(vector<int>& arr, vector<int>& subsets, int i) {
    // Base case: if all elements are processed
    if (i == arr.size()) {
        // Print the subset
        for (int j = 0; j < subsets.size(); j++) {
            cout << subsets[j] << " ";
        }
        cout << endl;
        return;
    }

    // Inclusion
    subsets.push_back(arr[i]);
    printSubsets(arr, subsets, i + 1);

    // Backtrack
    subsets.pop_back(); 

    // Exclusion
    printSubsets(arr, subsets, i + 1);
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> subsets;
    printSubsets(arr, subsets, 0);
    return 0;
}