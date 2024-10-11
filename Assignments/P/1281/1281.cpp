class Solution {
public:
    int subtractProductAndSum(int n) {
        string num = to_string(n);
        int product = 1, sum = 0;
        
        for(int i = 0; i < num.size(); i++)
        {
            sum += int(num[i] - '0');
            product *= int(num[i] - '0'); 
        }
        ;
      return product - sum;
    }
};
