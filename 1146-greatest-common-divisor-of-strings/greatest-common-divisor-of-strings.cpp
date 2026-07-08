class Solution {
public:
    int GCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        int len = GCD(str1.length(), str2.length());

        string ans = "";
        for (int i = 0; i < len; i++)
            ans += str1[i];

        return ans;
    }
};