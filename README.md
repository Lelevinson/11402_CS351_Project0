# Two Sum

Given an array of integers, find two numbers that add up to a target sum and return their indices.

# Requirements

- **Language**: C++ 20 with STL Vector
    - Use modern C++ standards (`-std=c++20`)
    - Leverage STL containers (Vector, Unordered_map) for efficient data management
    - Follow RAII principles and const-correctness

## 2. Implementation Details

### 2.1 TwoSumArray (Brute Force)
- **Algorithm**: Nested loop approach
- **Time Complexity**: O(n²)
- **Space Complexity**: O(1)
- **When to use**: Small datasets (n < 1000)
- **Concrete steps**:
    1. Outer loop: iterate through each element
    2. Inner loop: compare current element with remaining elements
    3. Return indices when sum equals target

### 2.2 TwoSumHashTable (Optimized)
- **Algorithm**: Hash table lookup
- **Time Complexity**: O(n)
- **Space Complexity**: O(n)
- **When to use**: Large datasets (n ≥ 1000)
- **Concrete steps**:
    1. Create unordered_map to store value-index pairs
    2. Iterate array once, calculate complement for each element
    3. Check if complement exists in map
    4. Return indices or indicate no solution

## 3. Test Cases
- **Positive cases**: Valid pairs with integers (both positive and negative)
- **Edge cases**: Empty array, single element, duplicate values, target=0
- **Multiple solutions**: Array with more than one valid pair
- **No solution**: Scenario where no valid pair exists
- **Boundary testing**: Min/max integer values

## 4. CI/CD Pipeline
- **GitHub Actions workflow** on every push and PR
- **Automated test execution**: Run full test suite
- **Merge blocking**: Prevent PR merge if any test fails
- **Coverage reporting**: Generate and upload test coverage metrics
- **Artifact storage**: Archive test reports for review

## 5. Deliverables
- Source code in `/src/` directory
- Unit tests in `/tests/` directory
- GitHub Actions workflow in `/.github/workflows/`
- Documentation in README
- All tests passing before merge
