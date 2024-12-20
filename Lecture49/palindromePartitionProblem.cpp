

// leet code problem 131. Palindrome Partitioning
// Given a string s, partition s such that every  substring of the partition is a palindrome. Return all possible palindrome partitioning of s.
 

 #include <iostream>
 #include <vector>

 using namespace std;


 int main() {
     string s = "aab";
     vector<vector<string>> result = partition(s);
     for (const auto& subset : result) {
         for (const auto& word : subset) {
             cout << word << " ";
         }
         cout << endl;
     }
     return 0;
 }