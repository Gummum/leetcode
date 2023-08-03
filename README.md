# leetcode

## Not Pass

[347.前-k-个高频元素.cpp](./347.前-k-个高频元素.cpp)
[2.6.n-字形变换](./6.n-字形变换.cpp)
[3.343.整数拆分](./343.整数拆分.cpp)
[4.10.正则表达式匹配.cpp](./10.正则表达式匹配.cpp)
[5.剑指 Offer 20. 表示数值的字符串.cpp](./剑指%20Offer%2020.%20表示数值的字符串.cpp)
[6.54.螺旋矩阵](./54.螺旋矩阵.cpp)
[7.233.数字-1-的个数.cpp](./233.数字-1-的个数.cpp)
[8.剑指 Offer 45. 把数组排成最小的数.cpp](./剑指%20Offer%2045.%20把数组排成最小的数.cpp)
[10.剑指 Offer 59 - II. 队列的最大值.cpp](./剑指%20Offer%2059%20-%20II.%20队列的最大值.cpp)
[11.剑指 Offer 60. n个骰子的点数.cpp](./剑指%20Offer%2060.%20n个骰子的点数.cpp)
[12.剑指 Offer 62. 圆圈中最后剩下的数字.cpp](./剑指%20Offer%2062.%20圆圈中最后剩下的数字.cpp)
[13.121.买卖股票的最佳时机.cpp](./121.买卖股票的最佳时机.cpp)
[14.707.设计链表.cpp](./707.设计链表.cpp)

## 排序

[1.归并排序](./912.排序数组.cpp)
[2.快速排序](./912.排序数组.cpp)

## 查找

[1.二分查找](./704.二分查找.cpp)

## KMP

## 动态规划

### 思路1

    1.穷举分析
    2.确定边界
    3.找出规律，确定最优子结构
    4.写出状态转移方程

### 思路2

    1.先想递归
    2.发现重复计算
    3.通过记忆化等方法弄掉重复计算
    4.最后看下能不能通过利用计算顺序来做到去掉递归用“刷表”方式直接顺序计算，能搞定最好搞不定拉倒

### 思路3

    1.定义数组元素的含义，一般是要求的答案。
    2.找出数组元素之间的关系式：dp[n] 一定会和 dp[n-1], dp[n-2]....存在某种关系的。
    3.找出初始值，注意特殊值。

