#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> &book, int n, int m, int maxAllocatedPage) {
    int student = 1;
    int allocatedPage = 0;

    for (int i = 0; i < n; i++) {
        if (book[i] > maxAllocatedPage) {
            return false;
        }
        if (allocatedPage + book[i] > maxAllocatedPage) {
            student++;
            allocatedPage = book[i];
            if (student > m) {
                return false;
            }
        } else {
            allocatedPage += book[i];
        }
    }
    return true;
}

int allocationBooks(vector<int> &books, int n, int m) {
    if (n > m) {
        return -1;
    }

    int sum = 0;
    int maxBook = 0;
    for (int i = 0; i < n; i++) {
        sum += books[i];
        maxBook = max(maxBook, books[i]);
    }

    int st = maxBook;
    int end = sum;
    int ans = -1;

    while (st <= end) {
        int mid = (st + end) / 2;
        cout << "Checking mid: " << mid << ", st: " << st << ", end: " << end << endl;

        if (isValid(books, n, m, mid)) {
            ans = mid;
            cout << "Valid mid found: " << mid << endl;
            end = mid - 1;
        } else {
            cout << "Invalid mid: " << mid << endl;
            st = mid + 1;
        }
    }
    
    cout << "Final answer: " << ans << endl; // Additional debug info
    return ans;
}


int main() {
    vector<int> books = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    int testMaxAllocatedPage = 113; // Try with different values like 100, 150

    if (isValid(books, n, m, testMaxAllocatedPage)) {
        cout << "Valid allocation for max pages: " << testMaxAllocatedPage << endl;
    } else {
        cout << "Invalid allocation for max pages: " << testMaxAllocatedPage << endl;
    }

    return 0;
}

