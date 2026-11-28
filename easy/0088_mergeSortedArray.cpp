class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lastNum1Pos = m + n - 1;
        int lastNum1Actual = m - 1;
        int lastNum2Actual = n - 1;
        while (true) {
            if (lastNum2Actual < 0) {
                return;
            }
            if (lastNum1Actual >= 0) {
                if (nums1[lastNum1Actual] >= nums2[lastNum2Actual]) {
                    nums1[lastNum1Pos] = nums1[lastNum1Actual];
                    lastNum1Pos--;
                    lastNum1Actual--;
                } else {
                    nums1[lastNum1Pos] = nums2[lastNum2Actual];
                    lastNum1Pos--;
                    lastNum2Actual--;
                }
            } else {
                nums1[lastNum1Pos] = nums2[lastNum2Actual];
                lastNum1Pos--;
                lastNum2Actual--;
            }
        }
    }
};