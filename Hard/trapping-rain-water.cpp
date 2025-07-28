class Solution {
public:
    int trap(vector<int>& height) {
        // calculate the prefix max
        vector<int> prefix(height.size(), 0);
        prefix[0] = height[0];
        int maxSoFar = height[0];
        for(int i = 1; i < height.size(); i++)
        {
            prefix[i] = maxSoFar;
            if (height[i] > maxSoFar)
                maxSoFar = height[i];
        }
        // calculate the suffix max
        vector<int> suffix(height.size(), 0);
        suffix[height.size() - 1] = height[height.size() - 1];
        maxSoFar = height[height.size() - 1];
        for(int i = height.size() - 2; i >= 0; i--)
        {
            suffix[i] = maxSoFar;
            if (height[i] > maxSoFar)
                maxSoFar = height[i];
        }
        // calculate the trapping water
        int result = 0;
        for (int i = 1; i < height.size(); i++)
        {
            int water = min(prefix[i], suffix[i]) - height[i];
            if (water > 0)
                result += water;

        }
        return result;
    }
};
