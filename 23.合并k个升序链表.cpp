/**
 * @file 23.合并k个升序链表.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你一个链表数组，每个链表都已经按升序排列。
 * 请你将所有链表合并到一个升序链表中，返回合并后的链表。
 * @version 0.1
 * @date 2022-02-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */
//暴力解法：将所有值存入数组，将数组排序，直接建立结果链表，填入节点值


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int num = lists.size();
        vector<int> allnum;
        for (int i = 0; i < num; ++i) {
            ListNode* temp = lists[i];
            while(temp) {
                allnum.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(allnum.begin(),allnum.end());
        ListNode* ans = new ListNode(allnum.size());
        ListNode* p = ans;
        for (int i = 0; i < allnum.size(); ++i) {
            ListNode* t = new ListNode(allnum[i]);
            p->next = t;
            p = p->next;
        }
        return ans->next;

    }
};