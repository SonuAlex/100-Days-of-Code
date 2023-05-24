// Q39
// You have a long flowerbed in which some of the plots are planted, and some are not. However, flowers cannot be planted in adjacent plots.
// Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return true if n new flowers can be planted in the flowerbed without violating the no-adjacent-flowers rule and false otherwise.

// SOURCE CODE
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size(), count=0;
        bool isSkip = false;
        if(n == 0){
            return true;
        }
        if(len == 1){
            if(flowerbed[0] == 0){
                return true;
            } else {
                return false;
            }
        } else if(len == 2){
            if(flowerbed[0] == 1 || flowerbed[1] == 1){
                return false;
            } else {
                if(n >= 2){
                    return false;
                }
                return true;
            }

        }

        for(int i=0; i<len; i++){
            if(!isSkip){
                if(flowerbed[i] == 0){
                    if(i != 0 && i != len-1){
                        if(flowerbed[i-1] != 1 && flowerbed[i+1] != 1){
                            count++;
                            isSkip = true;
                        }
                    } else if(i == 0){
                        if(flowerbed[i+1] != 1){
                            count++;
                            isSkip = true;
                        }
                    } else if(i == len-1){
                        if(flowerbed[i-1] != 1){
                            count++;
                            isSkip = true;
                        }
                    }
                }
            } else {
                isSkip = false;
            }
        }

        if(n <= count){
            return true;
        } else {
            return false;
        }
    }
};