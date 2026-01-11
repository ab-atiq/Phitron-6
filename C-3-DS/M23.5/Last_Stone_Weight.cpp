// https://leetcode.com/problems/last-stone-weight/solutions/7036342/simple-priority-queue-beginner-friendly-8lpdt/

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq;
        for (int x : stones)
            pq.push(x);
        while (!pq.empty())
        {
            int first = pq.top();
            pq.pop();
            if (pq.empty())
                return first;
            int sec = pq.top();
            pq.pop();
            if (first != sec)
                pq.push(first - sec);
        }
        return 0;
    }
};

class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> maxHeap;

        for (int stone : stones)
        {
            maxHeap.push(stone);
        }

        while (maxHeap.size() > 1)
        {
            int first = maxHeap.top();
            maxHeap.pop();
            int second = maxHeap.top();
            maxHeap.pop();

            // if first != second PQ value then push in difference
            if (first != second)
            {
                maxHeap.push(first - second);
            }
        }

        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};