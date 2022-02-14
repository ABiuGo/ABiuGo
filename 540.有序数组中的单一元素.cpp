/* ************************************************************************
> File Name:     540.有序数组中的单一元素.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  一  2/14 11:02:19 2022
> Description:   
 ************************************************************************/

//给你一个仅由整数组成的有序数组，其中每个元素都会出现两次，唯有一个数只会出现一次。
//请你找出并返回只出现一次的那个数。
//你设计的解决方案必须满足 O(log n) 时间复杂度和 O(1) 空间复杂度。
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int right = nums.size()-1;
        int left = 0;
        // return (left+right)/2;
        while (left < right) {
            int mid = (left + right) / 2;
            if (nums[mid] == nums[mid^1]) { //mid为偶，mid^1 = mid + 1; mid为奇，mid^1 = mid-1
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return nums[left];
    }
};
