/***
 * @Author: gongbinwen
 * @Date: 2023-07-25 14:00
 * @LastEditTime: 2023-07-25 15:02
 * @FilePath: \leetcode\295.数据流的中位数.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=295 lang=cpp
 *
 * [295] 数据流的中位数
 */

// @lc code=start
class MedianFinder
{
public:
    MedianFinder()
    {
    }

    void addNum(int num)
    {
        if (maxHeap.empty() || maxHeap.top() > num)
            maxHeap.push(num);
        else
            minHeap.push(num);
        if (maxHeap.size() > minHeap.size() + 1)
        {
            minHeap.push(maxHeap.top());
            maxHeap.pop();
        }
        else if (minHeap.size() > maxHeap.size() + 1)
        {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian()
    {
        if (minHeap.size() == maxHeap.size())
        {
            return ((minHeap.top() + maxHeap.top()) / 2.0);
        }
        else
        {
            return minHeap.size() > maxHeap.size() ? minHeap.top() : maxHeap.top();
        }
    }

private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    priority_queue<int, vector<int>, less<int>> maxHeap;
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end
/*
    超时了
    class MedianFinder {
public:
    MedianFinder() {

    }

    void addNum(int num) {
        vec.push_back(num);
    }

    double findMedian() {
        sort(vec.begin(),vec.end());
        if(vec.size()%2)
            return vec[vec.size()/2];
        else
            return (vec[vec.size()/2]+vec[vec.size()/2-1])/2.0;
    }
private:
    vector<int> vec;
};
*/
