class Solution {
public:
    int ans = 0;
 // Answered by chatgpt
    pair<int, int> dfs(TreeNode* root) {
        if (!root)
            return {0, 0};

        auto [ls, lc] = dfs(root->left);
        auto [rs, rc] = dfs(root->right);

        int sum = ls + rs + root->val;
        int cnt = lc + rc + 1;

        ans += (root->val == sum / cnt);

        return {sum, cnt};
    }

    int averageOfSubtree(TreeNode* root) {
        dfs(root);
        return ans;
    }
};