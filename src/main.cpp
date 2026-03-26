#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::string;
using std::vector;

vector<int> twoSumArray(const vector<int>& nums, int target);
vector<int> twoSumHashTable(const vector<int>& nums, int target);

void printResult(const string& methodName, const vector<int>& result) {
	cout << methodName << ": ";
	if (result.size() == 2) {
		cout << '[' << result[0] << ", " << result[1] << ']';
	} else {
		cout << "No solution";
	}
	cout << '\n';
}

int main() {
	const vector<int> nums = {2, 7, 11, 15};
	const int target = 9;

	cout << "Input: [2, 7, 11, 15], target = 9\n";
	printResult("TwoSumArray (brute force)", twoSumArray(nums, target));
	printResult("TwoSumHashTable (optimized)", twoSumHashTable(nums, target));

	return 0;
}