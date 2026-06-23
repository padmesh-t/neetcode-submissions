class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        set<pair<int,int>,greater<pair<int,int>> > s;
        unordered_map<int,int> mp;
        vector<int> result;
        for(auto &i:nums)
            ++mp[i];
        for(auto &i:mp) s.insert({i.second,i.first});
        int j = 0;
        for(auto &i:s) if(j++ < k) result.push_back(i.second);
        //cout<<i.first<<" "<<i.second<<endl;
        return result;
    }
};
