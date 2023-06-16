#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        //Approch 1:        
        // if(nums.size() == 1){
        //     return nums[0];
        // }

        // int start = 0, end = nums.size() - 1;

        // while(start < end){
        //     int mid = start + (end-start) / 2;
        //     if(nums[mid] == nums[mid+1]){
        //         mid = mid - 1;
        //     }

        //     if((mid-start+1)%2 != 0){
        //         end = mid;
        //     }
        //     else{
        //         start = mid + 1;
        //     }
        // }
        // return nums[start];

        //Approch 2:
        unordered_map<int,int>mpp;
        for(auto i:nums)
            mpp[i]++;
      
        for(auto it:mpp)
            if(it.second==1) return it.first;
        
        return -1;

    }
};