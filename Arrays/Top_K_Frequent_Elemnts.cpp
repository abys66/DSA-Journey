class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map <int, int> map;

        for (int num : nums) {
            map[num]++;
        }
        
        vector<vector<int>> buckets(nums.size() + 1);

        for (auto pair : map) {
            int number = pair.first;
            int frequency = pair.second;
            buckets[frequency].push_back(number);
        }

        vector<int>result;

        for (int i = buckets.size() - 1; i >= 0; i--) {

            for (int num : buckets[i]) {
                result.push_back(num);

                if (result.size() == k) {
                    return result;
                }
            }
        } 
        return {};  
    }
};
