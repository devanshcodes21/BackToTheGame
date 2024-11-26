#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
  public:
    int minValue(string s, int k) {
        int n = s.length();
        unordered_map<char,int> mp;
        priority_queue<int> pq;
        int answer = 0;
        for(auto it: s)
        {
            mp[it]++;
        }

        for(auto it: mp)
        {
            pq.push(it.second);
        }
        while(k-- && !pq.empty())
        {
            auto top_element = pq.top();
            pq.pop();
            top_element -= 1;
            pq.push(top_element);
        }
        while(!pq.empty())
        {
            int top_element = pq.top();
            answer = answer + top_element * top_element;
            pq.pop();
        }
        return answer;
    }
};