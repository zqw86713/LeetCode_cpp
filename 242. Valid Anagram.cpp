/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<int> table(26);
        for (int i = 0; i< s.size(); i++) {
            table[s[i] - 'a']++;
        }

        for (int i = 0; i<t.size(); i++) {
            table[t[i]-'a']--;
            if (table[t[i]-'a']<0) {
                return false;
            }
        }

        return true;
        
    }
};
*/


