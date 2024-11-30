#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution
{
    public:
        int countWords(string list[], int n)
        {
            unordered_map<string,int> mp;
            int answer = 0;
            for(int i=0; i<n; i++)
            {
                mp[list[i]]++;
            }
            for(auto it: mp)
            {
                if(it.second == 2)
                {
                    answer++;
                }
            }
            return answer;
        }
};