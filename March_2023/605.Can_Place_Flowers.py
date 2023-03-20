# LeetCode 605. Can Place Flowers
# beginner friendly way

# in C++ availabel in --> 605.Can_Place_Flowers.cpp

# Date: March-20-2023

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:

        for i in range(len(flowerbed)):
            if flowerbed[i] == 0 and (i == 0 or flowerbed[i-1] == 0) and (i == len(flowerbed) - 1 or flowerbed[i+1] == 0):
                flowerbed[i] = 1;
                n -= 1

                if n == 0:
                    return True
        
        if n > 0:
            return False

        return True
    
