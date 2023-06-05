// Q50
// Given two numbers, hour and minutes, return the smaller angle (in degrees) formed between the hour and the minute hand.
// Answers within 10-5 of the actual value will be accepted as correct.

// SOURCE CODE
class Solution {
public:
    double angleClock(int hour, int minutes) {
        int minAngle = minutes * 6;
        double hrAngle = hour*30 + minutes*0.5;
        double minimum = abs(minAngle-hrAngle);
        return min(minimum, 360-minimum);
    }
};