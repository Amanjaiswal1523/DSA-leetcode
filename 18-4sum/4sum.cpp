class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        set<vector<int>> s;

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                int st = j + 1;
                int end = nums.size() - 1;

                while (st < end) {

                    long long sum = (long long)nums[st] + nums[end];
                    long long req = (long long)target - nums[i] - nums[j];

                    if (sum == req) {

                        s.insert({nums[i], nums[j],
                                  nums[st], nums[end]});

                        st++;
                        end--;
                    }
                    else if (sum < req) {
                        st++;
                    }
                    else {
                        end--;
                    }
                }
            }
        }

        vector<vector<int>> ans(s.begin(), s.end());

        return ans;
    }
};