class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result(2,0);
        int n = numbers.size();
        for(auto i = 0 ; i < n ; i++ ){
            for(auto j = i + 1 ; j  < n ; j++ ){
                if(numbers[i]+numbers[j] == target){
                    result[0]=i+1;
                    result[1]=j+1;
                    return result;
                }else if(numbers[i]+numbers[j] > target)
                    continue;
            }
        }
        return {};
    }
};
