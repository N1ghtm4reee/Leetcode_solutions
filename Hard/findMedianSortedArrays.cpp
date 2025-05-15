class Solution {
public:
    int findInsertPos(const vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (int val : nums2) {
            int pos = findInsertPos(nums1, val);
            nums1.insert(nums1.begin() + pos, val);
        }

        int t = nums1.size();
        if (t % 2)
            return nums1[t / 2];
        double res = nums1[(t / 2) - 1] + nums1[t / 2];
        return res / 2;
    }
};
