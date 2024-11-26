#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> answer;
        for(auto it: arr)
        {
            pq.push(it);
            while(pq.size() > k && !pq.empty())
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            answer.push_back(pq.top());
            pq.pop();
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};