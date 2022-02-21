/* ************************************************************************
> File Name:     838.推多米诺.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  一  2/21 18:16:17 2022
> Description:   
 ************************************************************************/
class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        int i = 0;
        char left = 'L';    //记录连续的竖着的牌最左边的倒向
        char right = 'R';   //记录连续的竖着的牌最右边的倒向
        while (i < n) {
            //遇到竖着的牌，开始进行判断
            if (dominoes[i] == '.') {   
                int j = i;
                //用j指针走到最右边非竖着的牌
                while (j < n && dominoes[j] == '.') ++j;
                //如果最右边没牌了，把right看作向右倒，否则记录最右边牌的倒向
                right = j == n ? 'R' : dominoes[j];
                //竖着的牌左右都相等，直接全部往相同方向倒
                if (left == right) {
                    while(i < j) {
                        dominoes[i] = left;
                        ++i;
                    }
                } else if (left == 'L' && right == 'R') {
                    //左边往左，右边往右（右边没牌的时候right记录的也是往右）
                    //竖着的牌不变
                    i = j;
                } else {
                    //左边往右倒，右边往左倒，用双指针从两边向中间倒
                    int k = j-1;
                    while (i < k) {
                        dominoes[i] = 'R';
                        dominoes[k] = 'L';
                        ++i;
                        --k;
                    }
                    i = j;
                }
            } else {
                //更新最左边的倒向，直到遇见“.”
                left = dominoes[i];
                ++i;
            }
        }
        return dominoes;
    }
};
