

// Painters problem

#include <iostream>
#include <vector>
#include <climits>


using namespace std;

bool canPaint(vector<int> &min, int n, int m, int maxAllocatedTime) {
    int painter = 1;
    int allocatedTime = 0;

    for (int i = 0; i < n; i++) {
        if (time + arr[i] <= maxAllocatedTime) {
            time += arr[i];
        } else {
            painter++;
            allocatedTime = arr[i];
        }
    }
    return painter <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m) {
    int sum = 0;
    int maxVal = INT_MIN;

    // calculate sum of all values
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal;
    int end = sum;
    int ans = -1;

    while (st <= end) { 
        int mid = (st + end) / 2;

        // Check if it's possible to paint the houses in given time
        if (canPaint(arr, n, m, mid)) {     //left searching
            ans = mid;
            end = mid - 1;  
        } else {    //right searching
            st = mid + 1;
        }
    }
    
    return ans;
}

int main() {

    vector<int> arr = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    cout << "Minimum time required to paint all houses is: " << minTimeToPaint(arr, n, m) << endl;
    return 0;
}