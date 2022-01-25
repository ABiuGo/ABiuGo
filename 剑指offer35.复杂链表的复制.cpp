/**
 * @file 剑指offer35.复杂链表的复制.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 请实现 copyRandomList 函数，复制一个复杂链表。在复杂链表中，
 * 每个节点除了有一个 next 指针指向下一个节点，还有一个 random 指针指向链表中的任意节点或者 null。
 * @version 0.1
 * @date 2022-01-25
 * 
 * @copyright Copyright (c) 2022
 * 
 */


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head) return NULL;
        Node* p = head;
        while(p) {
            Node *node_new = new Node(p->val);
            node_new->next = p->next? p->next:NULL;
            p->next = node_new;
            p = p->next->next;
        }
        p = head;
        while(p) {
            p->next->random = p->random? p->random->next: NULL;
            p = p->next->next;
        }
        p = head;
        Node* ans = head->next;
        Node* cur = head->next;
        while(p->next->next) {
            p->next = p->next->next;
            cur->next = cur->next->next;
            p = p->next;
            cur = cur->next;
        }
        p->next = NULL;
        return ans;

    }
};