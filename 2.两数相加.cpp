/**
 * @file 2.两数相加.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 给你两个 非空 的链表，表示两个非负的整数。
 * 它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。
 * 请你将两个数相加，并以相同形式返回一个表示和的链表。
 * @version 0.1
 * @date 2022-01-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */



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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();  //结果头节点
        ListNode* p = result;
        int one = 0,ten = 0;                //相加十位和个位
        while (l1 || l2) {
            int l1_val = l1?l1->val: 0;
            int l2_val = l2?l2->val: 0;
            int oneSum = l1_val + l2_val + ten;
            ten = oneSum / 10;
            one = oneSum % 10;
            ListNode* temp = new ListNode(one);
            l1 = l1?l1->next: NULL;
            l2 = l2?l2->next: NULL;
            p->next = temp;
            p = p->next;
        }
        if (ten != 0) {         //当都结束时，判断是否还需进位
            ListNode* end = new ListNode(ten);
            p->next = end;
        }
        return result->next;
    }
};