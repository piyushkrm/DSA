// Rat in Maze Problem

#include <iostream>
#include <vector>
using namespace std;

// Helper function to explore all possible paths in the maze
void helper(vector<vector<int>>& maze, int row, int column, string path, vector<string>& answers) {
    int n = maze.size();

    // Base cases: Out of bounds or invalid cell
    if (row < 0 || column < 0 || row >= n || column >= n || maze[row][column] == 0 || maze[row][column] == -1) {
        return;
    }

    // If destination cell is reached, store the path
    if (row == n - 1 && column == n - 1) {
        answers.push_back(path);
        return;
    }

    // Mark the current cell as visited
    maze[row][column] = -1;

    // Explore all possible directions
    helper(maze, row - 1, column, path + "U", answers); // Move Up
    helper(maze, row + 1, column, path + "D", answers); // Move Down
    helper(maze, row, column - 1, path + "L", answers); // Move Left
    helper(maze, row, column + 1, path + "R", answers); // Move Right

    // Backtrack: Mark the current cell as unvisited
    maze[row][column] = 1;
}

// Function to find all paths from the top-left to the bottom-right corner of the maze
vector<string> findPath(vector<vector<int>>& maze) {
    int n = maze.size();
    vector<string> answer;
    string path = "";

    // Start exploring paths from the top-left corner
    helper(maze, 0, 0, path, answer);
    return answer;
}

// Main function
int main() {
    // Define the maze (1: open path, 0: blocked path)
    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    // Find and print all possible paths
    vector<string> ans = findPath(maze);
    for (string path : ans) {
        cout << path << endl;
    }

    return 0;
}
