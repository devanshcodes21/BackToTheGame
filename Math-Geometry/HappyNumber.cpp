#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int find_sum_of_squares_output(int n)
    {
        int sum = 0;
        while(n)
        {
            sum = sum + pow(n%10, 2);
            n = n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow_number = n;
        int fast_number = find_sum_of_squares_output(slow_number);

        while(slow_number != fast_number)
        {
            slow_number = find_sum_of_squares_output(slow_number);
            fast_number = find_sum_of_squares_output(fast_number);
            fast_number = find_sum_of_squares_output(fast_number);
        }
        return slow_number == 1;
    }
};