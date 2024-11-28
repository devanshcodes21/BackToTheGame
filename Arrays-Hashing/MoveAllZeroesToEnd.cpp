#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n = arr.size();
        int non_zero_pointer = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] != 0)
            {
                swap(arr[i], arr[non_zero_pointer]);
                non_zero_pointer++;
            }
        }
    }
};