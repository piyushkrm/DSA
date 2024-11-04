

// 443. String Compression

#include <iostream>

using namespace std;

int compressString(string &s){
    int idx = 0;
    for (int i = 0; i < s.length(); i++) {
        char ch = char[i]
        int count = 1;
        while (i < s.length() && char[i] == ch) {
            i++;
            count++;
        }
        if (count == 1) {
            s[idx++] = ch;
        } else {
            s[idx++] = ch;
            string str = to_string(count);
            for (char digit : str) {
                s[idx++] = digit;
            }
            i--; // Backtrack to the last character of the current group
        }
    }
    s.resize(idx);
    return idx;
}

int main()
{
    string s = "aaabbcccccaaa";
}
