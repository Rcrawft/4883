class Solution {
public:
    double distance(vector<int>& a)
    {
        return (a[0] * a[0]) + (a[1] * a[1]);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double, vector<int>>> pq;
        vector<vector<int>> ans;

        for(int i = 0; i < points.size(); i++)
        {
            pq.push({distance(points[i]), points[i]});
            if(pq.size() > k)
                pq.pop();
        }

        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};
