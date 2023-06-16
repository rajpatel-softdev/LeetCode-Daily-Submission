// LeetCode 1232. Check If It Is a Straight Line
// beginner friendly way

// Date: June-05-2023

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int size = coordinates.size();

        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];

        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];

        for(int i=2; i<size; i++){

            int x = coordinates[i][0];
            int y = coordinates[i][1];

            // slop must be equal if find between any two point
            // (y - y1) / (x - x1) == (y - y2) / (x - x2) --> condition must alway be true for it be straight line

            // division may cause divide by zero error
            // --> (y - y1) * (x - x2) == (y - y2) * (x - x1) 

            // so if this condition is != , the points are not in straight line

            if((y - y1) * (x - x2) != (y - y2) * (x - x1)){
                return false;
            }

        }

        return true;
    }
};