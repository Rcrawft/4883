class Solution {
public:
    int mySqrt(int x) {
        long int i = 0;
        while (i * i <= x)
            i++;
        if (i * i > x)
            i -= 1;
        return i;
    }
};
