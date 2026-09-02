class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string, std::vector<string>> groups;

        for (std::string& s : strs) {
            std::string key = s;
            std::sort(key.begin(), key.end());
            groups[key].push_back(s);
        }

        std::vector<std::vector<std::string>> result;

        for (auto& [key, group] : groups) {
            result.push_back(group);
        }

        return result;
    }
};
