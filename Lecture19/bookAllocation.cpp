
// Book allocation problem

#include <iostream>
#include <vector>

using namespace std;


bool isValid(vector<int> &book, int n, int m, int maxAllocatedPage) {
    int student = 1;
    int allocatedPage = 0;

    for (int i = 0; i <n; i++) {
        if (book[i] > maxAllocatedPage) {
            return false;
        }
        if (allocatedPage + book[i] > maxAllocatedPage) {
            student++;
            allocatedPage = book[i];
        } else {
            allocatedPage += book[i];
        }
    }
    return student > n ? false : true;
}

int allocationBooks(vector<int> & books, int n, int m) {
    if (n > m) {
        return -1;
    }

    //sum of an array of books
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += books[i];
    }

    int st = 0;
    int end = sum;
    int ans = -1;

    while (st <= end) {
        int mid = (st + end) / 2;
        if (isValid(books, n, m)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
        return ans;
    }
}
int main() {

}