#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> answer;
        int n = strs.size();
        for(auto it: strs)
        {
            string temp_str = it;
            sort(it.begin(), it.end());
            mp[it].push_back(temp_str);
        }
        for(auto it: mp)
        {
            auto temp_arr = it.second;
            answer.push_back(temp_arr);
        }
        return answer;
    }
};