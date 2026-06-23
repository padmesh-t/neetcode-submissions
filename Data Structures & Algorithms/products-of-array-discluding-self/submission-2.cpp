class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long mul = 1,n=nums.size(),flag = 0,change = 0;
        for( auto &i:nums){
            if(i != 0 || flag == 1 ){
                mul = mul*i;
                change = 1;
            }
            else flag = 1;
        }
        for( auto i = 0 ; i < n ; i++ ){
            if( flag == 0 )
                nums[i] = mul/nums[i];
            else if( nums[i] == 0 && change == 1)
                nums[i] = mul;
            else 
                nums[i] = 0; 
        }
        return nums;
    }
};
