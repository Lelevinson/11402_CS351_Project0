# Two Sum

Given an array of integers, find two numbers that add up to a target sum and return their indices.

# Requirements

- **Language**: C++ 20 with STL Vector
  - Use modern C++ standards and features
  - Leverage STL containers for efficient data management
- **Implementations**: - `TwoSumArray`: Brute force approach using nested loops - Time complexity: O(n²) - Space complexity: O(1) - Suitable for small datasets - `TwoSumHashTable`: Hash table approach for O(n) time complexity - Time complexity: O(n) - Space complexity: O(n) - Optimal for larger datasets
- **Test Cases**: Comprehensive unit tests covering: - Valid pairs with positive/negative integers - Edge cases (empty array, single element, duplicate values) - Multiple valid pairs in single array - No valid pair exists scenario - Target sum equals zero - All tests must pass before merging
- **CI/CD**: Automated testing via GitHub Actions on push and pull requests
  - Run full test suite automatically
  - Prevent merge if tests fail
  - Generate test coverage reports

(test commit)
