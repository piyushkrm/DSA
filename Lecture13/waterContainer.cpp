

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
// Time Complexity = 0(n^2)

// Most optimized way to calculate the water capacity 

int maxAreaOptimized(vector<int> &waterCapacity) {
    int left = 0;
    int right = waterCapacity.size() - 1;
    int maxWater = 0;
    
    while (left < right) {
        int width = right - left;
        int height = min(waterCapacity[left], waterCapacity[right]);
        int currentArea = width * height;

        maxWater = max(maxWater, currentArea);

        waterCapacity[left] < waterCapacity[right] ? left ++ : right --;
    }
    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum water that can be contained is: " << maxArea(height) << endl;
    cout << "Maximum water that can be contained is: " << maxAreaOptimized(height) << endl;
    return 0;
}

