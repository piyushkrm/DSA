// LeetCode Problem 131: Palindrome Partitioning
// Given a string s, partition s such that every substring of the partition is a palindrome.
// Return all possible palindrome partitioning's of s.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(string s) {
    string s2 = s;
    reverse(s2.begin(), s2.end()); // Reverse the string
    return s2 == s; // Compare the original and reversed strings
}

// Recursive helper function to generate all palindrome partitions
void getAllParts(string s, vector<string>& partition, vector<vector<string>>& answer) {
    // Base case: If the string is empty, add the current partition to the answer
    if (s.empty()) {
        answer.push_back(partition);
        return;
    }

    // Explore all possible partitions
    for (int i = 0; i < s.size(); i++) {
        // Extract the substring from the start to the current index
        string part = s.substr(0, i + 1);

        // Check if the substring is a palindrome
        if (isPalindrome(part)) {
            partition.push_back(part); // Add the palindrome to the current partition

            // Recur for the remaining substring
            getAllParts(s.substr(i + 1), partition, answer);

            partition.pop_back(); // Backtrack to explore other partitions
        }
    }
}

// Main function to find all palindrome partitions of a given string
vector<vector<string>> partition(string s) {
    vector<vector<string>> answer; // To store all partitions
    vector<string> partition; // To store the current partition

    // Start generating partitions
    getAllParts(s, partition, answer);
    return answer;
}

int main() {
    // Input string
    string s = "aab";

    // Find all palindrome partitions
    vector<vector<string>> result = partition(s);

    // Print the results
    for (const auto& subset : result) {
        for (const auto& word : subset) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
