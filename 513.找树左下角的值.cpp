/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-04 15:19
 * @LastEditTime: 2023-08-04 16:17
 * @FilePath: \leetcode\513.找树左下角的值.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=513 lang=cpp
 *
 * [513] 找树左下角的值
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        int value;
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty())
        {
            int size=que.size();
            for(int i=0;i<size;i++)
            {
                TreeNode *node=que.front();
                if(i==0)
                    value=node->val;
                que.pop();
                if(node->left)
                    que.push(node->left);
                if(node->right)
                    que.push(node->right);
            }
        }
        return value;
    }
};
// @lc code=end

