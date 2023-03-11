//LeetCode 109: Convert Sorted List to Binary Search Tree
//beginner friendly way

//Date: March-11-2023

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

struct ListNode{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



class Solution {
private:
    TreeNode* convertToBST(ListNode* start, ListNode* end){

        //base case
        if(start == end){
            return NULL;
        }

        //finding Mid
        ListNode* slow = start;
        ListNode* fast = start;

        while(fast != end && fast->next != end){
            slow = slow -> next;
            fast = fast -> next;
        }

        //here slow pointer contains address of Mid Node
        //slow == mid

        //creating Node for Tree
        TreeNode* curr = new TreeNode(slow->val);

        //getting left and right by reccursion
        curr->left = convertToBST(start,slow);
        curr->right = convertToBST(slow->next, end);

        return curr;

    }


public:
    TreeNode* sortedListToBST(ListNode* head) {
        
        //for empty list
        if(head == NULL){
            return NULL;
        }

        return convertToBST(head, NULL);
    }
};


int main(){

    return 0;
}