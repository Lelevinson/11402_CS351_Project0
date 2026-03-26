# 04 - Test Plan

## 1. Test Objectives

- Validate correctness of both Two Sum methods.
- Confirm behavior for edge and no-solution scenarios.
- Verify consistent behavior policy between implementations.

## 2. Scope

- In scope: algorithm functions, return format, edge handling.
- Out of scope: UI testing, performance benchmarking at production scale.

## 3. Test Levels

- Unit tests for each method independently.
- Cross-check tests to compare outputs from both methods under same policy.

## 4. Test Environment

- C++20 compiler.
- Local build and GitHub Actions CI workflow.

## 5. Test Categories

| Category    | Goal                                        |
| ----------- | ------------------------------------------- |
| Nominal     | Typical arrays with exactly one valid pair  |
| Edge        | Empty array, one element, duplicate values  |
| Value Range | Negative numbers, zero target, large values |
| No Solution | Inputs where no pair exists                 |
| Consistency | Both methods follow same output policy      |

## 6. Entry Criteria

- Source builds without compiler errors.
- Test harness is available in `tests/`.

## 7. Exit Criteria

- All critical acceptance tests pass.
- No open critical defects.
- Traceability matrix updated.

## 8. Defect Severity

- Critical: Wrong indices or out-of-bounds results.
- Major: Incorrect no-solution handling.
- Minor: Documentation mismatch or non-critical style issues.
