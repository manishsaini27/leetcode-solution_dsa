class Solution {
public:

    string removeSpecialCharacter(string s) {

        string ans = "";

        for(int i = 0; i < s.length(); i++) {

            if((s[i] >= 'a' && s[i] <= 'z') ||
               (s[i] >= 'A' && s[i] <= 'Z') ||
               (s[i] >= '0' && s[i] <= '9')) {

                ans.push_back(s[i]);
            }
        }

        return ans;
    }


    string toLowerCase(string s) {

        for(int i = 0; i < s.length(); i++) {

            if(s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        }

        return s;
    }


    bool isPalindrome(string s) {

        s = removeSpecialCharacter(s);

        s = toLowerCase(s);

        int left = 0;
        int right = s.length() - 1;

        while(left < right) {

            if(s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};