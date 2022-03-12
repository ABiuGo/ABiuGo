/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        if (!root) return {};
        
        vector<int> ans;
        stack<Node*> st;
        st.emplace(root);
        unordered_set<Node* > visited;
        Node* temp = root;
        
        while (!st.empty()) {
            temp = st.top();
            if (temp->children.size() == 0 || visited.count(temp)) {    //无子节点或已经被遍历过，则存入ans并pop
                ans.emplace_back(temp->val);
                st.pop();
                continue;
            }
            for (int i = temp->children.size(); i != 0; --i) {          //将子节点按顺序存入栈，顺序会反
                st.emplace(temp->children[i-1]);
                visited.emplace(temp);
            }
        }

        return ans;
    }
}; 