// https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (int x : nums)
            s.insert(x);
        return s.size() != nums.size(); // nums size and set size equal or not check
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
            if (freq[num] > 1) {
                return true; // duplicate found
            }
        }
        return false; // no duplicates
    }
};

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for (int num : nums) {
            if (s.find(num) != s.end()) {
                return true; // duplicate found
            }
            s.insert(num);
        }
        return false; // no duplicates
    }
};