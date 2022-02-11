/* ************************************************************************
   > File Name:     116.填充每个节点的下一个右侧节点指针.cpp
   > Author:        Crpdim
   > mail:         crpdim7@gmail.com
   > Created Time:  五  2/11 11:24:08 2022
   > Description:   
 ************************************************************************/

/*
// Definition for a Node.
class Node {
public:
int val;
Node* left;
Node* right;
Node* next;

Node() : val(0), left(NULL), right(NULL), next(NULL) {}

Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

Node(int _val, Node* _left, Node* _right, Node* _next)
: val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return NULL;
        connect(root->left, root->right);
        return root;
    }
    void Connect(Node* node1,Node* node2) {
        if (!node1 || !node2) return;
        node1->next = node2;
        connect(node1->left, node1->right);
        connect(node2->left, node2->right);
        connect(node1->right, node2->left);
    }
};
