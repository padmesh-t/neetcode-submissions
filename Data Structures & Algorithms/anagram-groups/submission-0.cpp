class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<vector<int>,int> mp;
        for(auto &i:strs){
            vector<int> arr(26,0);
            for(auto &j:i) arr[j-'a']++;
            if(mp.contains(arr)){
                result[mp[arr]].push_back(i);
            }else{
                mp[arr]=result.size();
                result.push_back({});
                result[mp[arr]].push_back(i);
            }
        }
        return result;
    }
};
