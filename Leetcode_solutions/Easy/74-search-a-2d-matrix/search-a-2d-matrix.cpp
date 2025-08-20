class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lr = 0;
        int rr = matrix.size() - 1;
        int cr = matrix[0].size() - 1;
        while(lr <= rr)
        {
            int mr = (lr + rr) / 2;
            if (target < matrix[mr][0])
                rr = mr - 1;
            else if (target > matrix[mr][cr])
                lr = mr + 1;
            else if (target >= matrix[mr][0] && target <= matrix[mr][cr])
            {
                // found the row, now need to find columns
                int l = 0;
                int r = cr;
                while(l <= r)
                {
                    int mid = (l + r) / 2;
                    if (target > matrix[mr][mid])
                        l = mid + 1;
                    else if (target < matrix[mr][mid])
                        r = mid - 1;
                    else
                        return true;
                }
                return false;
            }
        }
        return false;
    }
};
