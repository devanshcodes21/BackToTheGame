#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
      unordered_map<int,int> mp;
      for(auto it: arr)
      {
        if(mp.find(target-it) != mp.end())
        {
          return true;
        }
        mp[it]++;
      }
      return false;
    }
};