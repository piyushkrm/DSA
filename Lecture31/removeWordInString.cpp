// Remove word in String -> 151

#include <iostream>
#include <string>
#include <algorithm> // for reverse function


using namespace std;

string removeWord(string str) {
    int n = str.length();
    // string ans = "";
    reverse(str.begin(), str.end());
    return str;

}

int main() {
    string s = "The sky is blue";
    cout << removeWord(s) << endl;
}