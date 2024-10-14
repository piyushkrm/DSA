

// Aggressive cows problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPossible(vector<int>& points, int N, int C, int minAllowedDistance) {
    int cows = 1;
    int lastStallPositions = points[0];

    for (int i = 1; i < points.size(); i++) {
        if (points[i] - lastStallPositions >= minAllowedDistance) {
            cows++;
            lastStallPositions = points[i];
        }

        if (cows == C) {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int>& points, int N, int C) {
    sort(points.begin(), points.end());

    int start = 1;
    int end = points[N - 1] - points[0];
    int ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(points, N, C, mid)) {
            // right searching
            ans = mid;
            start = mid + 1;
        } else {
            // left searching
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int N = 5;
    vector<int> points = {1, 2, 4, 8, 9};
    int C = 3;
    cout << "Minimum distance between cows: " << getDistance(points, N, C) << endl;
    return 0;
}