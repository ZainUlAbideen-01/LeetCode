class Solution {
public:
    bool canAliceWin(int n) {
        int aliceTurn = 10;
        int stonesLeft = n;
        int bobTurn = 10;
        string player = "Alice";
        while (stonesLeft >= 0) {

            if (player == "Alice") {
                stonesLeft = stonesLeft - aliceTurn;
                bobTurn = aliceTurn - 1;
                player = "Bob";
            } else if (player == "Bob") {
                stonesLeft = stonesLeft - bobTurn;
                aliceTurn = bobTurn - 1;
                player = "Alice";
            }
        }
        if (player == "Alice") {
            return 1;
        } else {
            return 0;
        }
    }
};