// Leetcode 530. Minimum Absolute Difference in BST
// beginner friendly way

// Date: June-14-2023

#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//Approch 1 : using DFS -->
class Solution {
private:
    void DFS(TreeNode* root, vector<int>& data){
        if(root == NULL){
            return;
        }

        data.push_back(root -> val);

        // calling recursion
        DFS(root -> left, data);
        DFS(root -> right, data);
    }

public:
    int getMinimumDifference(TreeNode* root) {
        
        vector<int> data;

        // DFS and loding all values in data --> O(N)
        DFS(root, data);

        //sorting data --> O(NlogN)
        sort(data.begin(), data.end());

        // finding minimum --> O(N)
        int diff = INT_MAX;

        for(int i = 1; i < data.size(); i++){
            diff = min(diff, data[i] - data[i - 1]);
        }

        // overall T.C. --> O(NlogN)
        return diff;


    }
};



// Approch 2 : InOrder traversal gives data of BST in increasing order -->
class Solution{
private:
    void inOrder(TreeNode* root, vector<int>& data){
        if(root == NULL){
            return;
        }

        inOrder(root -> left, data);
        data.push_back(root -> val);
        inOrder(root -> right, data);
    }

public:
    int getMinimumDifference(TreeNode* root){

        vector<int> data;

        //inOrder Traversal and loading values in data --> O(N)
        inOrder(root, data);

        //finding minimum from data --> O(N)
        int diff = INT_MAX;

        for(int i = 1; i < data.size(); i++){
            diff = min(diff, data[i] - data[i - 1]);
        }

        //overall T.C. --> O(N)
        return diff;


    }
};