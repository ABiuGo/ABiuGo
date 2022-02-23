/* ************************************************************************
> File Name:     917.仅仅反转字母.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  三  2/23 11:51:56 2022
> Description:   
 ************************************************************************/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        // 初始化左右边界的指针
        int left = 0, right = s.size() - 1;
        // 当左右还没相交时，将字母进行交换
        while (left < right) {
            // 如果左边指向的不是字母，则向右移，如果两个指针已相遇，说明后面不需要继续交换
            while (!isalpha(s[left]) && left < right) left++;
            // 如果右边指向的不是字母，则向左移，如果两个指针已相遇，说明后面不需要继续交换
            while (!isalpha(s[right]) && left < right) right--;
            // 如果两个指针没有相遇，则进行左右交换
            if (left < right) swap(s[left++], s[right--]);
        }
        return s;
    }
};
