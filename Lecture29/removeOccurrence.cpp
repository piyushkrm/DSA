
// Remove All Occurrences of a Substring --> Leet code 1910

#include <iostream>

using namespace std;

string removeOccurrences(string s, string sub) {
    while(s.length() > 0 && s.find(sub) < s.length()) {
        s.erase(s.find(sub), sub.length());
    }
    return s;
}

int main() {

}