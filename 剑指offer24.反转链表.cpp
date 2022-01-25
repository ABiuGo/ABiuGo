/**
 * @file 剑指offer24.反转链表.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head || !head->next) return head;
        ListNode* head_new = reverseList(head->next);   
        //走到倒数第二个节点，newhead 为最后一个节点，并让最后一个节点指向该节点，并删除此节点的next。
        head->next->next = head;                        
        head->next = NULL;
        return head_new;
    }
}; 