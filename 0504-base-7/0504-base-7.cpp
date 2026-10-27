class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool negative = num < 0;
        num = abs(num);

        string result = "";

        while (num > 0) {
            int remainder = num % 7;
            result += to_string(remainder);
            num /= 7;
        }

        reverse(result.begin(), result.end());

        if (negative) {
            result = "-" + result;
        }

        return result;
    }
};