
// 567. Permutation in String

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isFrequencySame(int frequency1[], int frequency2[]) {
    for (int i = 0; i < 26; i++) {
        if (frequency1[i]!= frequency2[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2) {
    int frequency[26] = {0};
    for (int i = 0; i < s1.length(); i++) {
        frequency[s1[i] - 'a']++;
    }

    int windowSize = s1.length();
    for (int i = 0; i < s2.length(); i++) {
        int windowIndex = 0;
        int idx = i;
        int windowFrequency[26] = {0};

        while (windowIndex < windowSize && idx < s2.length()) {
            windowFrequency[s2[idx] - 'a']++;
            windowIndex++;
            idx++;

            if (isFrequencySame(frequency, windowFrequency)) { // found frequency
                return true;
            }    
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    cout << "Permutation in String ? " << (checkInclusion(s1, s2) ? "true" : "false") << endl;// Output: true
    return 0;
}