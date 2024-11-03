// Remove word in String -> 151

#include <iostream>
#include <string>
#include <algorithm> // for reverse function


using namespace std;

string removeWord(string str) {
    int n = str.length();
    string ans = "";
    reverse(str.begin(), str.end());
    for (int i = 0; i < n; i++) {
        string word = "";
        while (i < n && str[i] != ' ') {
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0) {
            ans += " "+ word;
        }
    }
    return ans.substr(1);
}

int main() {
    string s = "The sky is blue";
    cout << removeWord(s) << endl;
}