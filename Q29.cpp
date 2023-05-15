// Q29
// You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
// Letters are case sensitive, so "a" is considered a different type of stone from "A".

// SOURCE CODE
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int len1 = jewels.size(), len2 = stones.size(), lar = 0, count = 0;
        if (len1 > len2) lar = len1;
        else lar = len2;
        for(int i=0; i<len1; i++){
            for(int j=0; j<len2; j++){
                if (jewels[i] == stones[j]){
                    count ++;
                }
            }
        }        
        return count;
    }
};