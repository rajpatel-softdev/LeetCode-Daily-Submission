// LeetCode 704. Binary Search
// beginner friendly way

// Date: April-01-2023

#include<iostream>
using namespace std;

class Solution{

    public:
        int search(vector<int>& nums, int target) {

            int start = 0;
            int end = nums.size() - 1;

            int mid = start + (end - start) / 2;

            while(start <= end){

                if(nums[mid] == target){
                    return mid;
                }

                if(target > nums[mid]){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }

                mid = start + (end - start) / 2;
            }
            return -1;
        }
};