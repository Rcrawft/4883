class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int ans;
        while(t > 0)
        {
           num += 2;
            t--;
        }
        return num;
    }
};
