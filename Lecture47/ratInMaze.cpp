

// Rat in Maze Problem


#include <iostream>
#include <vector>

using namespace std;

// Find path function
vector<string> findPath(vector<vector<int>>& maze) {
    int n = maze.size();
    vector<string> answer;
    string path = "";

    helper(maze, 0, 0, path, answer);
    return answer;
}


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