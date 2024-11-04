

// 443. String Compression

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compressString(string &s){
    int idx = 0;
    for (int i = 0; i < s.length();) {
        char ch = s[i];
        int count = 0;

        // Count consecutive characters
        while (i < s.length() && s[i] == ch) {
            i++;
            count++;
        }

        // Store the character
        s[idx++] = ch;

        // Store the count if it's more than 1
        if (count > 1) {
            string str = to_string(count);
            for (char digit : str) {
                s[idx++] = digit;
            }
        }
    }
    s.resize(idx);
    return idx;
}

int main() {
    string s = "aaabbcccccaaa";
    int compressedSize = compressString(s);
    cout << "Compressed string: " << s << endl;
    cout << "Compressed size: " << compressedSize << endl;
    return 0;
}
