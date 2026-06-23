class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26]={0}, n = s.size();
        if( n != t.size()) return false;
        for(int i = 0 ; i < n ; i++ ){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(auto &i:arr)
            if(i != 0 ) return false;
        return true;
    }
};
