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

            while(temp != NULL){
                len++;
                temp = temp->next;
            }

        }    

        int getRandom(){

            int rand_num = rand() % len;
            ListNode* randNode = all_head;

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