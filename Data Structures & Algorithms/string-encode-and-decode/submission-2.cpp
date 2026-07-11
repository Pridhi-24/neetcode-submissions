class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";

        for (string s : strs) {
            ans += to_string(s.length());
            ans += '#';
            ans += s;
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;

        while (i < s.length()) {

            string number = "";

            while (s[i] != '#') {
                number += s[i];
                i++;
            }

            int len = stoi(number);

            i++; // Skip '#'

            string word = "";

            while (len--) {
                word += s[i];
                i++;
            }

            ans.push_back(word);
        }

        return ans;
    }
};