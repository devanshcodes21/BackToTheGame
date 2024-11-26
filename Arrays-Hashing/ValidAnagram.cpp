#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.length();
        int n = t.length();
        unordered_map<char,int> mp;
        for(auto it: s)
        {
            mp[it]++;
        }
        for(auto it: t)
        {
            if(mp.find(it) != mp.end())
            {
                mp[it]--;
                if(mp[it] == 0)
                {
                    mp.erase(it);
                }
            } else {
                return false;
            }
        }
        return mp.empty();
    }
};