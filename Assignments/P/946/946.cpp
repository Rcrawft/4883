class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> empt;
        bool answer = false;
        int j = 0;

        for (int i = 0; i < pushed.size(); i++) {
            empt.push(pushed[i]);

            while (!empt.empty() && empt.top() == popped[j]) {
                empt.pop();
                j++;
            }
        }

        if(empt.empty())
            answer = true;
            
        return answer;
    }
};
