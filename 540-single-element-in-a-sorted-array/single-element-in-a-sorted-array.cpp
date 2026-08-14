class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        // Edge cases outside the loop
        if (nums.size() == 1)
            return nums[0];

        if (nums[0] != nums[1])
            return nums[0];

        if (nums[nums.size() - 1] != nums[nums.size() - 2])
            return nums[nums.size() - 1];

        int start = 1;
        int end = nums.size() - 2;

        while (start <= end) {

            int mid = (start + end) / 2;

            if (nums[mid - 1] != nums[mid] &&
                nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // odd
            if (mid % 2 != 0) {

                if (nums[mid] == nums[mid - 1])
                    start = mid + 1;
                else
                    end = mid - 1;
            }

            // even
            else {

                if (nums[mid] == nums[mid + 1])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return -1;
    }
};