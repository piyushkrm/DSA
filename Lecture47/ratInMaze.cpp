

// Rat in Maze Problem


#include <iostream>
#include <vector>

using namespace std;

// Helper function to find path
void helper(vector<vector<int>>& maze, int row, int column, string path, vector<string>& answers) {
    int n = maze.size();

    // Base case: if destination is reached
    if (row < 0 || column < 0 || column >= n || row >= n || maze[row][column] == 0 || maze[row][column] == -1) {
        return;
    }

    if (row == n - 1 && column == n - 1) {
        answers.push_back(path);
        return;
    }

    // Mark the element as visited
    maze[row][column] = -1;

    // Explore all possible paths
    helper(maze, row - 1, column, path + "U", answers);
    helper(maze, row + 1, column, path + "D", answers);
    helper(maze, row, column - 1, path + "L", answers);
    helper(maze, row, column + 1, path + "R", answers);

    // Mark the element as unvisited
    maze[row][column] = 1;
   
}

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