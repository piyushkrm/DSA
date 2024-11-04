

// 3163. String Compression III

#include <iostream>
#include <string>

using namespace std;

string compressString(string word) {
    string comparison;      // store comparison string 
    int n = word.length();

    if (n == 0) return "";  //Return empty string

    for(int i = 0; i < n;) {
        char ch = word[i];
        int count = 0;

        // consecutive character count up maximum 9
        while(i < n && word[i] == ch && count < 9) {
            count ++;
            i++;
        }

        // append character and count to comparison string
        comparison += to_string(count) + ch;
    }

    return comparison;  // return comparison string
}
int main() {
    string word = "abcde";
    cout << compressString(word) << endl;  // Output: "3a3b3c"
    return 0;
}