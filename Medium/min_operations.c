class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i = 0;
        int size = boxes.size();
        vector<int> result(size, 0);
        for(int i = 0; i < size; i++)
        {
            for(int j = 0;j < size; j++)
            {
                if (boxes[j] == '1')
                    result[i] += abs(i - j);
            }
        }
        return result;
    }
};
