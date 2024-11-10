class Solution {
public:
    void dfs(int garden, vector<vector<int>>& graph, vector<int>& result) {
        bool used[5] = {}; 
        for (int adj : graph[garden]) {
            if (result[adj] != 0) {
                used[result[adj]] = true;
            }
        }
        for (int flower = 1; flower <= 4; flower++) {
            if (!used[flower]) {
                result[garden] = flower;
                break;
            }
        }
        for (int adj : graph[garden]) {
            if (result[adj] == 0) {
                dfs(adj, graph, result);
            }
        }
    }

    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>> graph(n);
        for (int i = 0; i < paths.size(); i++) {
            int u = paths[i][0] - 1;
            int v = paths[i][1] - 1;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        vector<int> result(n, 0); 
        for (int i = 0; i < n; i++) {
            if (result[i] == 0) { 
                dfs(i, graph, result);
            }
        }
        return result;
    }
};
