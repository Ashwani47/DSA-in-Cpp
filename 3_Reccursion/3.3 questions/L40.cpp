// GFG :- Rat in a maze

class Solution {
private:
    bool isSafe(int x, int y, int n, vector<vector<int>>& visited, vector<vector<int>>& maze) {
        return (x >= 0 && x < n && y >= 0 && y < n &&
                visited[x][y] == 0 && maze[x][y] == 1);
    }
    void solve(vector<vector<int>>& maze, int n, vector<string>& ans,
               int x, int y, vector<vector<int>>& visited, string path) {

        if (x == n - 1 && y == n - 1) {
            ans.push_back(path);
            return;
        }

        visited[x][y] = 1;

        // D
        if (isSafe(x + 1, y, n, visited, maze))
            solve(maze, n, ans, x + 1, y, visited, path + 'D');

        // L
        if (isSafe(x, y - 1, n, visited, maze))
            solve(maze, n, ans, x, y - 1, visited, path + 'L');

        // R
        if (isSafe(x, y + 1, n, visited, maze))
            solve(maze, n, ans, x, y + 1, visited, path + 'R');

        // U
        if (isSafe(x - 1, y, n, visited, maze))
            solve(maze, n, ans, x - 1, y, visited, path + 'U');

        visited[x][y] = 0;
    }
public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        int n = maze.size();

        vector<string> ans;
        if (maze[0][0] == 0) return ans;

        vector<vector<int>> visited(n, vector<int>(n, 0));
        solve(maze, n, ans, 0, 0, visited, "");
        sort(ans.begin(), ans.end());
        return ans;
    }
};

