
// 88. Merge Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int mergeSorted(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();
    int i = n - 1;
    int j = m - 1;
    int index = n + m - 1;

    while (i >= 0 && j >= 0) {
        if (a[i] > b[j]) {
            a[index] = a[i];
            i--;
        } else {
            a[index] = b[j];
            j--;
        }
        index--;
    }
}

int main() {

}