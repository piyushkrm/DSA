

// Aggressive cows problem

#include <iostream>
#include <vector>

using namespace std;

int getDistance(vector<int>& points, int N, int C) {
    short(points.begin(), points.end());

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
    return -1;
}

bool isPossible(vector<int>& points, int N, int minAllowedDistance) {

}

int main() {

}