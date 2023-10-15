class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (n != (int) goal.size()) {
            return false;
        }
        char temp[n];
        for (int sh = 1; sh <= n; sh++) {
            memset(temp, '?', sizeof(temp));
            for (int i = 0; i < n; i++) {
                int j = ((i - sh) + n) % n;
                temp[j] = s[i];
            }
            bool ok = true;
            for (int i = 0; i < n; i++) {
                ok &= (temp[i] == goal[i]);
            }
            if (ok) {
                return true;
            }
        }
        return false;
    }
};
