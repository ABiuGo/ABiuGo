/*
 * @lc app=leetcode.cn id=825 lang=cpp
 *
 * [825] 适龄的朋友
 */

// @lc code=start
class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int len = ages.size();
        sort(ages.begin(),ages.end());
        int left = 0,right = 0;
        int ans = 0;
        for (int i = 0; i < len; ++i) {
            if (ages[i] < 15) {
                continue;
            }
            while (ages[left] <= ages[i]*0.5+7) {
                left++;
            }
            while (right+1 < len && ages[right+1] <= ages[i]){
                right++;
            }
            ans += right - left;
        }
        return ans;
    }
};

// @lc code=end

