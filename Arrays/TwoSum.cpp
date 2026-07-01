class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for(int i = 0; i < nums.size(); i++){
            int companion = target - nums[i];

            if(seen.find(companion) != seen.end()){
                return{seen[companion], i};
            }

            seen[nums[i]] = i;
        }
        return{};
    }
};
