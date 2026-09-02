class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
        }

        std::vector<std::vector<int>> buckets(nums.size() + 1);

        for (auto& [num, count] : freq) {
            buckets[count].push_back(num);
        }

        std::vector<int> result;

        for (int count = nums.size(); count > 0; count--) {
            for (int num : buckets[count]) {
                result.push_back(num);
            }

            if (result.size() == k) {
                return result;
            }
        }
        return result;
    }
};
