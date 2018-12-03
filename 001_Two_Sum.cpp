#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dict;
        for (int i = 0; i < nums.size(); i++) {
            unordered_map<int, int>::iterator iter = dict.find(target - nums[i]);
            if (iter != dict.end()) {
                return vector<int>({iter->second, i});
            }
            dict[nums[i]] = i;
        }
        return vector<int>();
    }
};