

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

// optimized approach
vector<int> sumPair(vector<int> array, int target) {
    int i = 0;
    int j = array.size() - 1;
    vector<int> ans;
    
    while (i < j) {
        int presentSum = array[i] + array[j];

        if (presentSum > target) {
            j--;
        } else if (presentSum < target) {
            i++;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;  // return pair found
        }
    }
}

int main() {
    vector<int> array = {2, 7, 11, 15};
    int target = 13;
    
    vector<int> ans = pairSum(array, 26);
    vector<int> ANS = sumPair(array, 9);
    cout << ans[0] << ", "<< ans[1] << endl;
    cout << ANS[0] << ", "<< ANS[1] << endl;
    return 0;
}