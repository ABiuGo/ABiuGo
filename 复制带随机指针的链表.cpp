/**
 * @file 复制带随机指针的链表.cpp
 * @author Crpdim (crpdim7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-28
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