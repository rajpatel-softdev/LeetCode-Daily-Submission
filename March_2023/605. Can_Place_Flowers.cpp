// LeetCode 605. Can Place Flowers
// beginner friendly way

// in python availabel in --> 605.Can_Place_Flowers.py

// Date: March-20-2023

#include <iostream>
#include<vector>
using namespace std;

class Solution
{

public:
    bool canPlaceFlowers(vector<int> flowerbed, int n)
    {

        if (n == 0)
        {
            return true;
        }
        // int count = 0;

        for (int i = 0; i < flowerbed.size(); i++)
        {

            if ((flowerbed[i] == 0) && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
            {
                flowerbed[i] = 1;
                // count++;
                n--;

                if (n == 0)
                {
                    return true;
                }
            }

            // if(count >= n){
            //     return true;
            // }
        }

        if (n > 0)
        {
            return false;
        }

        return true;
    }
};

int main(){
    return 0;
}