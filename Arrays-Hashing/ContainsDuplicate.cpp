#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto it: nums)
        {
            s.insert(it);
        }
        return !(s.size() == nums.size());
    }
};
