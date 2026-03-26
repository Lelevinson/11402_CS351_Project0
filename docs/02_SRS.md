# 02 - Software Requirements Specification (SRS)

## 1. Overview

This document defines functional and non-functional requirements for the Two Sum C++ project.

## 2. Assumptions

- Input is a list of integers and a target integer.
- Exactly one valid pair may exist in primary use cases unless otherwise stated.
- Indices are zero-based.

## 3. Functional Requirements

| ID    | Requirement                                                                           |
| ----- | ------------------------------------------------------------------------------------- |
| FR-01 | The system shall accept an integer array input.                                       |
| FR-02 | The system shall accept an integer target input.                                      |
| FR-03 | Method A shall find a valid pair using a brute-force strategy.                        |
| FR-04 | Method B shall find a valid pair using a hash-table strategy.                         |
| FR-05 | The system shall return the indices of the selected pair.                             |
| FR-06 | Returned indices shall be distinct and within array bounds.                           |
| FR-07 | The system shall provide a deterministic result policy when multiple pairs are valid. |
| FR-08 | The system shall report no-solution cases in a documented way.                        |

## 4. Non-Functional Requirements

| ID     | Requirement                                                                |
| ------ | -------------------------------------------------------------------------- |
| NFR-01 | Code shall compile with C++20.                                             |
| NFR-02 | Method A worst-case complexity should be O(n^2) time and O(1) extra space. |
| NFR-03 | Method B expected complexity should be O(n) time and O(n) extra space.     |
| NFR-04 | Unit tests shall cover nominal, edge, and error-like cases.                |
| NFR-05 | CI pipeline shall run build and tests on push and pull request events.     |

## 5. Behavioral Rules

- If multiple valid pairs exist, the project should follow one documented policy (for example: first pair found by traversal order).
- No-solution behavior should be explicit (for example: empty result, sentinel pair, or exception).

## 6. Constraints

- Language: C++20.
- Standard containers only (for example `std::vector`, `std::unordered_map`).
- No external runtime dependencies required for core logic.
