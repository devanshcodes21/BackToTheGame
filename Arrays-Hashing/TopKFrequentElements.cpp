#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> answer;
        for(auto it: nums)
        {
            mp[it]++;
        }
        for(auto it: mp)
        {
            pq.push(make_pair(it.second,it.first));
            while(pq.size() > k)
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            answer.push_back(pq.top().second);
            pq.pop();
        }
        return answer;
    }
};