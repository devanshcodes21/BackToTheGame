#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        int m = s1.length();
        int n = s2.length();
        if(m!=n)
        {
            return false;
        }
        int temp = 0;
        unordered_map<char,int> mp;

        for(auto it: s1)
        {
            mp[it]++;
        }
        for(auto it: s2)
        {
            if(mp.find(it) != mp.end())
            {
                mp[it]--;
                if(mp[it] == 0)
                {
                    mp.erase(it);
                }
            } else {
                temp++;
                if(temp > k)
                {
                    return false;
                }
            }
        }
        return true;
    }
};