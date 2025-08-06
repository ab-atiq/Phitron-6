// https://leetcode.com/problems/kth-largest-element-in-an-array/solutions/7034999/simple-min-heap-priority-queue-by-piaaaa-o42y/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k) {
                minHeap.pop(); // remove smallest
            }
        }

        return minHeap.top(); // k-th largest
    }
};

// solution - method 2
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap(nums.begin(), nums.end());
        // Pop k-1 largest elements
        for (int i = 1; i < k; i++) {
            maxHeap.pop();
        }
        // The top of the max heap is now the k-th largest element
        return maxHeap.top();
    }
};