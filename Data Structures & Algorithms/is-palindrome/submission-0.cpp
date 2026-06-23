class Solution {
public:
    bool isPalindrome(string s) {
        for(int l = 0 , r = s.size()-1 ; l < r ; l++ , r-- ){
            while( l < r && !( (s[l] >= 'A' && s[l] <= 'Z' ) || ( s[l] >= 'a' && s[l] <= 'z') || ( s[l] >= '0' && s[l] <= '9' ) )){
                l++;
            }
            while( l < r && !( (s[r] >= 'A' && s[r] <= 'Z' ) || ( s[r] >= 'a' && s[r] <= 'z') || ( s[r] >= '0' && s[r] <= '9' ) )){
                r--;
            }
            cout<<l<<" "<<r<<endl;
            if( l < r && tolower(s[l]) != tolower(s[r]) ) return false;
        }
        return true;
    }
};
