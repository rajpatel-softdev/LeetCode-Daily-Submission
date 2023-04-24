// 1046. Last Stone Weight

// beginner friendly way

// Date: April-24-2023

// Can also use max heap or priority queue, thats less line of code
// this code uses stack as its more basic and rooted

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Solution {
private:
    // fucntion to insert element in stack at its right place, using recursion
    void sortedInsert(stack<int> &stack, int element){

	    //base case
	    if(stack.empty() || (!stack.empty() && stack.top() < element)){
		    stack.push(element);
		    return;
	    }

	    int num = stack.top();
	    stack.pop();

	    //recursive call
	    sortedInsert(stack, element);

	    stack.push(num);
    }


public:
    int lastStoneWeight(vector<int>& stones) {
        
        stack<int> s;

        sort(stones.begin(), stones.end());

        for(int i = 0; i < stones.size(); i++){
            s.push(stones[i]);
        }

        while(s.size() > 1){

            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if(a == b){
                continue;
            }
            else{
                a = a - b;
                sortedInsert(s, a);
            }
        }
        
        if(s.empty() == true){
            return 0;
        }
        else{
            return s.top();
        }

    }
};