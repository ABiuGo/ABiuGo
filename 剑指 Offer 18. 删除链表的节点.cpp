/**
 * @file 剑指 Offer 18. 删除链表的节点.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * 给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
 * 返回删除后的链表的头节点。
 * @version 0.1
 * @date 2022-01-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        if (head->val == val) return head->next;
        ListNode* temp = head;
        while (temp->next) {
            if (temp->next->val == val) {
                temp->next = temp->next->next? temp->next->next: NULL;
                break;
            }
            temp = temp->next;
        }
        return head;
    }
};