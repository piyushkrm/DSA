

// Leet code Problem 11 --> Container with most water

#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int maxWater = 0;
    for (int left = 0; left < height.size(); left++) {
        for (int right = left + 1; right < height.size(); right++) {
                int containerWidth = right - left;
                int containerHeight = min(height[left], height[right]);
                int area = containerWidth * containerHeight;

                maxWater = max(maxWater, area);
        }
    }
    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum water that can be contained is: " << maxArea(height) << endl;
    return 0;
}

