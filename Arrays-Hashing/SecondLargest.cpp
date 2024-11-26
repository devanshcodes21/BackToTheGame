#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        int maximum_number = INT_MIN;
        int second_maximum_number = INT_MIN;
        for(auto it: arr)
        {
            if(it > maximum_number)
            {
                second_maximum_number = maximum_number;
                maximum_number = it;
            }
            else if(it > second_maximum_number && it != maximum_number)
            {
                second_maximum_number = it;
            }
        }
        return second_maximum_number == INT_MIN ? -1 : second_maximum_number;
    }
};