class Solution {
public:
    bool isfeqsame(int feq1[], int feq2[]) {
        for (int i = 0; i < 26; i++) {
            if (feq1[i] != feq2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        if (s1.length() > s2.length())
            return false;

        int feq1[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            int no = s1[i] - 'a';
            feq1[no]++;
        }

        for (int x = 0; x <= s2.length() - s1.length(); x++) {
            int feq2[26] = {0};

            for (int i = x; i < x + s1.length(); i++) {
                int no = s2[i] - 'a';
                feq2[no]++;
            }

            if (isfeqsame(feq2, feq1)) {
                return true;
            }
        }

        return false;
    }
};