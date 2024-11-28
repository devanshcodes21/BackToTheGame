#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution{
  public:

  string checkLexiSmallerString(string string1, string string2)
  {
    int temp = string1.compare(string2);
    if(temp == 0)
    {
        return string1;
    } else if(temp > 0) {
        return string1;
    } else {
        return string2;
    }
  }

    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> mp;
        int greatest_frequency = INT_MIN;
        string answer = "";
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            greatest_frequency = max(mp[arr[i]], greatest_frequency);
        }
        for(auto it: mp)
        {
            if(it.second == greatest_frequency)
            {
                answer = answer == "" ? answer : checkLexiSmallerString(it.first, answer);
            }
        }
        return {answer, to_string(greatest_frequency)};
    }
};