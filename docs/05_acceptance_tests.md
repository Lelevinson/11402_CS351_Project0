# 05 - Acceptance Tests

## Acceptance Criteria

The project is accepted when all required tests below pass for both methods unless noted.

| Test ID | Input `nums`         | Target | Expected Result      | Notes                       |
| ------- | -------------------- | -----: | -------------------- | --------------------------- |
| AT-01   | [2, 7, 11, 15]       |      9 | [0, 1]               | Basic positive case         |
| AT-02   | [3, 2, 4]            |      6 | [1, 2]               | Non-adjacent pair           |
| AT-03   | [3, 3]               |      6 | [0, 1]               | Duplicate values            |
| AT-04   | [-1, -2, -3, -4, -5] |     -8 | [2, 4]               | Negative values             |
| AT-05   | [0, 4, 3, 0]         |      0 | [0, 3]               | Zero target with duplicates |
| AT-06   | []                   |      5 | No solution response | Empty input                 |
| AT-07   | [5]                  |      5 | No solution response | Single element              |
| AT-08   | [1, 2, 3]            |    100 | No solution response | No valid pair               |

## Pass Conditions

- Returned indices are distinct, valid, and sum to target.
- Output matches documented deterministic policy.
- No-solution behavior matches SRS.

## Fail Conditions

- Any out-of-range index.
- Any pair that does not sum to target.
- Inconsistent method behavior against documented policy.
