#include <unordered_map>
#include <vector>

using std::unordered_map;
using std::vector;

// O(n^2) brute-force method.
vector<int> twoSumArray(const vector<int>& nums, int target) {
	for (size_t i = 0; i < nums.size(); ++i) {
		for (size_t j = i + 1; j < nums.size(); ++j) {
			if (nums[i] + nums[j] == target) {
				return {static_cast<int>(i), static_cast<int>(j)};
			}
		}
	}
	return {};
}

// O(n) expected-time hash table method.
vector<int> twoSumHashTable(const vector<int>& nums, int target) {
	unordered_map<int, int> seenValueToIndex;

	for (size_t i = 0; i < nums.size(); ++i) {
		const int complement = target - nums[i];
		auto found = seenValueToIndex.find(complement);

		if (found != seenValueToIndex.end()) {
			return {found->second, static_cast<int>(i)};
		}

		// Keep the first seen index for deterministic behavior.
		if (seenValueToIndex.find(nums[i]) == seenValueToIndex.end()) {
			seenValueToIndex[nums[i]] = static_cast<int>(i);
		}
	}

	return {};
}