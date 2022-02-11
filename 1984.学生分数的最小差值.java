/* ************************************************************************
> File Name:     1984.学生分数的最小差值.java
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  五  2/11 11:44:26 2022
> Description:   
 ************************************************************************/
//滑动窗口，找最小层差值
class Solution {
    public int minimumDifference(int[] nums, int k) {
        Arrays.sort(nums);
        int n = nums.length, ans = nums[k - 1] - nums[0];
        for (int i = k; i < n; i++) {
            ans = Math.min(ans, nums[i] - nums[i - k + 1]);
        }
        return ans;
    }
}

