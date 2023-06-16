// Leetcode 1161. Maximum Level Sum of a Binary Tree
// beginner friendly way

// Date: June-14-2023

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{
    int maxLevelSum(TreeNode* root) {
        
        int sum = INT_MIN;
        int result = 0;
        int level = 0;

        queue<TreeNode*> q;
        q.push(root);

        while(q.empty() == false){
            
            int levelSum = 0;
            level++;

            for(int i = q.size(); i > 0; i--){

                TreeNode* node = q.front();
                q.pop();

                levelSum = levelSum + node->val;

                if(node->left != NULL){
                    q.push(node->left);
                }
                if(node->right != NULL){
                    q.push(node->right);
                }
            }

            if(sum < levelSum){
                sum = levelSum;
                result = level;
            }

        }

        return result;

    }
};

