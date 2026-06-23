class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(),nums.end());
        int max = 1 , count = 1 , n = nums.size();
        for(auto i = 1 ; i < n ; i++ ){
            if(nums[i]-1 != nums[i-1] && nums[i] != nums[i-1]){
                if(count > max ) max = count ;
                count = 1;
            }else if(nums[i] != nums[i-1]){
                if(++count > max ) max = count ;
            }
        }
        return max;
    }
};
