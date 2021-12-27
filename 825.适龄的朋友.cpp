/*
 * @lc app=leetcode.cn id=825 lang=cpp
 *在社交媒体网站上有 n 个用户。给你一个整数数组 ages ，其中 ages[i] 是第 i 个用户的年龄。’
如果下述任意一个条件为真，那么用户 x 将不会向用户 y（x != y）发送好友请求：
age[y] <= 0.5 * age[x] + 7
age[y] > age[x]
age[y] > 100 && age[x] < 100
否则，x 将会向 y 发送一条好友请求。
注意，如果 x 向 y 发送一条好友请求，y 不必也向 x 发送一条好友请求。另外，用户不会向自己发送好友请求。
返回在该社交媒体网站上产生的好友请求总数。

 * [825] 适龄的朋友
 */

// @lc code=start
class Solution {
public:
    int numFriendRequests(vector<int>& ages) {
        int len = ages.size();
        sort(ages.begin(),ages.end());                         //age[i] > left or right
        int left = 0,right = 0;
        int ans = 0;
        for (int i = 0; i < len; ++i) {                   
            if (ages[i] < 15) {                                //小于15岁的不要
                continue;
            }
            while (ages[left] <= ages[i]*0.5+7) {              //if left is i.target, left is i+1.target
                left++;
            }
            while (right+1 < len && ages[right+1] <= ages[i]){//
                right++;
            }
            ans += right - left;
        }
        return ans;
    }
};

// @lc code=end

