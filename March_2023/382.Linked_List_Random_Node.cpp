//LeetCode 382. Linked List Random Node 
//beginner friendly way

//Date: March-10-2023

#include<iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution{

    private:
        int len = 0;
        ListNode* all_head;
    
    public:
        Solution(ListNode* head){
            
            ListNode* temp = head;
            all_head = head;

            //to find length of LL
            while(temp != NULL){
                len++;
                temp = temp->next;
            }

        }    

        int getRandom(){

            //finding random number n
            int rand_num = rand() % len;   //getting it in range of 0 to len-1
            ListNode* randNode = all_head;

            // finding Nth node from LL -> it is random node
            while(rand_num != 0){
                randNode = randNode->next;
                rand_num--;
            }
            return randNode->val;
        }
};


int main(){
    return 0;
}