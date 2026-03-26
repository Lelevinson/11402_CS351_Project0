# 03 - Software Design Specification (SDS)

## 1. Architecture

The project uses a simple modular structure:

- `src/` contains algorithm implementations and entry points.
- `include/` (optional) contains headers/interfaces for algorithm functions.
- `tests/` contains test cases and test harness.

## 2. Component Design

### 2.1 Method A: Brute Force

- Iterates all index pairs `(i, j)` with `i < j`.
- Checks whether `nums[i] + nums[j] == target`.
- Returns on first valid pair according to traversal order.

### 2.2 Method B: Hash Table

- Iterates array once.
- For each value `x`, computes complement `target - x`.
- Checks map for complement before inserting current value.
- Returns pair when complement exists.

## 3. Suggested Interfaces

```cpp
std::vector<int> twoSumBruteForce(const std::vector<int>& nums, int target);
std::vector<int> twoSumHash(const std::vector<int>& nums, int target);
```

## 4. Data Structures

- `std::vector<int>` for input and output indices.
- `std::unordered_map<int, int>` mapping value to index for hash method.

## 5. Error and Edge Handling

- Empty or size-1 arrays return no-solution response.
- Duplicate values are supported.
- Negative values and zero are supported.

## 6. Complexity

| Method      | Time          | Extra Space |
| ----------- | ------------- | ----------- |
| Brute Force | O(n^2)        | O(1)        |
| Hash Table  | O(n) expected | O(n)        |

## 7. Design Decisions

- Keep algorithms as pure functions for easy testability.
- Separate algorithm logic from input/output handling.
- Favor readability for educational maintainability.
