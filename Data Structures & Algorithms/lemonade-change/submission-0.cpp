class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twen = 0;
        int n = bills.size();

        for (int i = 0; i < n; i++) {
            if (bills[i] == 5) five++;

            else if (bills[i] == 10) {
                if (five > 0) {
                    five--;
                    ten++;
                }
                else return false;
            }
            else {
                if (five >= 3) {
                    five -= 3;
                    twen++;
                }
                else if (ten > 0 && five > 0) {
                    five--;
                    ten--;
                    twen++;
                }
                else return false;
            }
        }
        return true;
    }
};