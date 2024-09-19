

// return pair to be equal of target

#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> array, int target) {
    vector<int> ans;

    for (int i = 0; i < array.size(); i++) {
        for (int j = i+1; j < array.size(); j++) {
            if (array[i] + array[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;  // return empty vector if no pair found
}

int main() {
    vector<int> array = {2, 7, 11, 15};
    int target = 13;
    
    vector<int> ans = pairSum(array, target);
    cout << ans[0] << ", "<< ans[1] << endl;
    return 0;
}