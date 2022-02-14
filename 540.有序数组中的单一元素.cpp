/* ************************************************************************
> File Name:     540.有序数组中的单一元素.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  一  2/14 11:02:19 2022
> Description:   
 ************************************************************************/
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
