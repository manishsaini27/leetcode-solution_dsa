class Solution {
public:
    string removeduplicate(string s) {
        string ans = "";
        for(int i =0 ; i< s.length(); i++) {
            if(s[i]>='a' && s[i] <= 'z' || s[i]>='A' && s[i] <= 'Z' ||s[i]>='0' && s[i] <= '9' ){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
    string tolowercase(string s) {
        for(int i =0; i< s.length() ; i++){
            if(s[i] >= 'A' && s[i] <='Z'){
                s[i] = s[i] - 'A' +'a';
            }
        }
        return s;
    }
    bool isPalindrome(string s) {
        s = removeduplicate(s);
        s = tolowercase(s);

        int start = 0;
        int end = s.length()-1;
        for( int  i = start ; i< end; i++){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
            
        }
        return true;
        
        
    }
};