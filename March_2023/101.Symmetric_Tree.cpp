// LeetCode 101. Symmetric Tree
// beginner friendly way

// Date: March-13-2023

#include<iostream>
using namespace std;

struct TreeNode{

    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution{

    private:
        bool isEqual(TreeNode* left_Node, TreeNode* right_Node){

            if(!left_Node || !right_Node){
                return left_Node == right_Node;
            }

            if(left_Node -> val == right_Node -> val){
                return isEqual(left_Node -> left, right_Node -> right) && isEqual(left_Node -> right, right_Node -> left);
            }
            return false;
        }


    public:
        bool isSymmetric(TreeNode* root) {
        
            if(root == NULL){
                return true;
            }

            return isEqual(root->left, root->right);

        }

};

int main(){

    return 0;
}