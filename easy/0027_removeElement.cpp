class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] == val) {
                if(nums[j]!=val){
                    int temp = nums[j];
                    nums[j] = nums[i];
                    nums[i]=temp;
                    i++;
                }
            }
            else{
                i++;
            }
        }
        return i;
    }
};