//Leetcode 1572. Matrix Diagonal Sum

// beginner friendly way
// Date: May-08-2023

/*

Input: mat = [[1,2,3],
              [4,5,6],
              [7,8,9]]
Output: 25
Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
Notice that element mat[1][1] = 5 is counted only once.

*/

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size = mat.size();
        int primSum = 0, secSum = 0;
        for(int i=0; i<size; i++){
            primSum = primSum + mat[i][i];
            secSum = secSum + mat[i][size-1-i];
        }
        if(size % 2 == 1){
            int mid = size / 2;
            secSum = secSum - mat[mid][mid];
        }
        return primSum + secSum;
    }
};
