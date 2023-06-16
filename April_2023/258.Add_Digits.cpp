// LeetCode 258. Add Digits

// if input is 38 --> sum of digit = 11
    // sum of digits of 11 = 2
    // output = 2

// biganer friendly way

#include<iostream>
using namespace std;

class Solution {
public:
    // using loop
    int addDigits(int num) {

        int sum = 0;
        while(num > 9){
            while(num != 0){
                //int digit = num % 10;
                sum = sum + (num % 10);
                num = num / 10;
            }
            num = sum;
            sum = 0;
        }
        return num;
        
    }

    // Using recursion
    int addDigitsRec(int num){

        int sum = 0;
        while(num != 0){
            sum = sum + (num % 10);
            num = num / 10;
        }

        if(num < 9)
            return sum;
        else
            return addDigitsRec(sum);

    }  

    // for O(1)
    int addDigit(int num){

        if(num == 0 ){
            return 0;
        }
        else if(num%9 == 0){
            return 9;
        }
        else{
            return num%9;
        }

    }

};
