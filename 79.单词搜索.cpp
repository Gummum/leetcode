/***
 * @Author: gongbinwen
 * @Date: 2023-07-17 19:24
 * @LastEditTime: 2023-07-17 19:46
 * @FilePath: \leetcode\79.单词搜索.cpp
 * @Description:
 * @
 */
/***
 * @Author: gongbinwen
 * @Date: 2023-07-17 19:24
 * @LastEditTime: 2023-07-17 19:43
 * @FilePath: \leetcode\79.单词搜索.cpp
 * @Description:
 * @
 */

/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start

class Solution
{
public:
    bool recurve(vector<vector<char>> &board, string word, int i, int j)
    {
        if (word.size() == 0)
            return true;
        bool ret = false;
        int up = i - 1, down = i + 1, left = j - 1, right = j + 1;
        if (up >= 0 && board[up][j] == word[0])
        {
            board[up][j] = '0';
            ret |= recurve(board, string(word.begin() + 1, word.end()), up, j);
        }
        if (down <= board.size() - 1 && board[down][j] == word[0])
        {
            board[down][j] = '0';
            ret |= recurve(board, string(word.begin() + 1, word.end()), down, j);
        }
        if (left >= 0 && board[i][left] == word[0])
        {
            board[i][left] = '0';
            ret |= recurve(board, string(word.begin() + 1, word.end()), i, left);
        }
        if (right <= board[0].size() - 1 && board[i][right] == word[0])
        {
            board[i][right] = '0';
            ret |= recurve(board, string(word.begin() + 1, word.end()), i, right);
        }
        return ret;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        bool ret = false;
        if (word.size() > (board.size() * board[0].size()))
            return ret;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == word[0])
                {
                    if (word.size() == 1)
                        return true;
                    else
                    {
                        board[i][j] = '0';
                        ret |= recurve(board, string(word.begin() + 1, word.end()), i, j);
                    }
                }
            }
        }
        return ret;
    }
};

// @lc code=end

/*
    step:
        1.通过遍历找到第一个字母
        2.递归
        3.上下左右判断边界，同时判断值
        4.相等就继续匹配，不相等就返回false


*/