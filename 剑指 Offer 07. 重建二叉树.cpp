/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-15 13:53
 * @LastEditTime: 2023-07-15 15:25
 * @FilePath: \leetcode\剑指 Offer 07. 重建二叉树.cpp
 * @Description: pass
 * @
 */
/*
输入某二叉树的前序遍历和中序遍历的结果，请构建该二叉树并返回其根节点。

假设输入的前序遍历和中序遍历的结果中都不含重复的数字。

示例 1:

Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]

示例 2:

Input: preorder = [-1], inorder = [-1]
Output: [-1]
 
限制：

0 <= 节点个数 <= 5000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/zhong-jian-er-cha-shu-lcof
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        if(preorder.size()==0||inorder.size()==0)return nullptr;

        TreeNode *head=new TreeNode;
        head->val=preorder[0];

        if(preorder.size()==1)
        {
            head->left=nullptr;
            head->right=nullptr;
            return head;
        }

        auto it=find(inorder.begin(),inorder.end(),head->val);
        int dis=distance(inorder.begin(),it);

        vector<int> nextLeftPreorder(preorder.begin()+1,preorder.begin()+dis+1);
        vector<int> nextLeftInorder(inorder.begin(),inorder.begin()+dis);
        vector<int> nextRightPreorder(preorder.begin()+dis+1,preorder.end());
        vector<int> nextRightInorder(it+1,inorder.end());
        head->left =buildTree(nextLeftPreorder,nextLeftInorder);
        head->right=buildTree(nextRightPreorder,nextRightInorder);

        return head;
    }
};
/*
    前序：根左右 中序：左根右 后序：左右跟
    alg：
        前序的第一个是根，中序的根左边是左节点，右边是右节点
        先获取前序的第一个，然后来判断中序的根节点的位置，
        根节点左边的个数是前序里左节点的个数，右边根节点的位置就判断出来了
    attention:
        vector.end()返回的是最后一个元素+1；
        vector.begin()返回的是第一个元素；

*/