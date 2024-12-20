

// Rat in Maze Problem


#include <iostream>
#include <vector>

using namespace std;


// Main function
int main() {
    // Define the maze
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};


    // Define the destination cell
    vector<string> ans = findPath(maze);
    for (string path : ans) {
        cout << path << endl;
    }
    return 0;
}