#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto i = grid.begin(); i != grid.end(); i++)
            for (auto j = i->begin(); j != i->end(); j++)
                if ((*j) < 0)
                    count++;
        return count;
    }
};

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j != grid[i].size(); j++)
                if (grid[i][j] < 0)
                    count++;
        return count;
    }
};

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        for (auto i = grid.begin(); i != grid.end(); i++)
            for (auto j = i->rbegin(); j != i->rend(); j++) {
                if ((*j) < 0)
                    count++;
                else
                    break;
            }
        return count;
    }
};