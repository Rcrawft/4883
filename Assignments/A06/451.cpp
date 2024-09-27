class Solution {
public:
    string frequencySort(string s) {
        map<char, int> m;
        for (auto i : s) {
            m[i]++;
        }

        priority_queue<pair<int, char>> q;
        for (auto i : m) {
            q.push({i.second, i.first});
        }

        string s2 = "";
        while (!q.empty()) {
            for (int i = 0; i < q.top().first; i++) {
                s2 += q.top().second;
            }
            q.pop();
        }

        return s2;
    }
};
