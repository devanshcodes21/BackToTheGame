#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0;
        int right = n-1;
        int top = 0;
        int bottom = m-1;

        int direction = 0;
        vector<int> answer;

        while(top<=bottom && left<=right)
        {
            switch(direction)
            {
                case 0:
                for(int i = left; i<=right; i++)
                {
                    answer.push_back(matrix[top][i]);
                }
                top++;
                break;

                case 1:
                for(int i=top; i<=bottom; i++)
                {
                    answer.push_back(matrix[i][right]);
                }
                right--;
                break;

                case 2:
                for(int i=right; i>=left; i--)
                {
                    answer.push_back(matrix[bottom][i]);
                }
                bottom--;
                break;

                case 3:
                for(int i=bottom; i>=top; i--)
                {
                    answer.push_back(matrix[i][left]);
                }
                left++;
                break;

                default:
                break;
            }
            direction = (direction+1)%4;
        }
        return answer;
    }
};