/* ************************************************************************
> File Name:     969.煎饼排序.cpp
> Author:        Crpdim
> mail:         crpdim7@gmail.com
> Created Time:  六  2/19 16:52:20 2022
> Description:   
 ************************************************************************/
/*
 *给你一个整数数组 arr ，请使用 煎饼翻转 完成对数组的排序。
 *一次煎饼翻转的执行过程如下：
 *选择一个整数 k ，1 <= k <= arr.length
 *反转子数组 arr[0...k-1]（下标从 0 开始）
 *例如，arr = [3,2,1,4] ，选择 k = 3 进行一次煎饼翻转，反转子数组 [3,2,1] ，得到 arr = [1,2,3,4] 。
 *以数组形式返回能使 arr 有序的煎饼翻转操作所对应的 k 值序列。任何将数组排序且翻转次数在 10 * arr.length 范围内的有效答案都将被判断为正确。
 */
class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        //冒泡，每一次循环将最大的当前最大的向后挪
        vector<int> ret;
        for (int n = arr.size(); n > 1; --n) {
            int k = max_element(arr.begin(), arr.begin() + n) - arr.begin();//找到未排序的最大元素下标
            if(k == n-1) continue;
            reverse(arr.begin(), arr.begin()+k+1);   //将最大元素翻转到第一位
            reverse(arr.begin(), arr.begin()+n);     //将最大元素放到该去的位置
            ret.push_back(k+1);
            ret.push_back(n);
        }
        return ret;
    }
};

