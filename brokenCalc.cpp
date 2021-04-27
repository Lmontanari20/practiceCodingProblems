class Solution {
public:
    int brokenCalc(int X, int Y) {
        // start with a count for operations
        // go backwards with Y, when Y is even divide by two
        // when Y is odd add one
        // do this until Y < X
        // once Y < X subtract Y from X and add count
        // subtract Y from X because that would be the amount of operations you need to add when Y goes < X
        
        int count = 0;
        
        while( Y > X ) {
            count++;
            if(Y % 2 == 0) {
                Y = Y/2;
            } else {
                Y++;
            }
            
        }
        return count + X - Y;
    }
};