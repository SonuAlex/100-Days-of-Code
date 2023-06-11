// Q56
// You are given an array of characters letters that is sorted in non-decreasing order, and a character target. There are at least two different characters in letters.
// Return the smallest character in letters that is lexicographically greater than target. If such a character does not exist, return the first character in letters.

// SOURCE CODE
class Solution {
    public char nextGreatestLetter(char[] letters, char target) {
        int i = 0;
        int n = letters.length;

        while(i < n){
            if(letters[i] > target){
                return letters[i];
            } else{
                i++;
            }
        }

        return letters[0];
    }
}