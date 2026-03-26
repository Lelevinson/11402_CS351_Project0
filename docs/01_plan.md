# 01 - Project Plan

## Objective

Deliver a maintainable C++ Two Sum project with two independent algorithm implementations, tests, and CI support.

## Work Breakdown

1. Requirements and scope definition.
2. Architecture and interface design.
3. Implementation of Method A (brute force).
4. Implementation of Method B (hash table).
5. Unit and integration testing.
6. CI setup and documentation completion.

## Milestones

| Milestone | Description         | Exit Criteria                                |
| --------- | ------------------- | -------------------------------------------- |
| M1        | Planning complete   | Intended use, plan, and SRS drafted          |
| M2        | Design complete     | SDS reviewed, interfaces frozen              |
| M3        | Core implementation | Two methods compile and return valid indices |
| M4        | Testing complete    | Test plan executed, key tests passing        |
| M5        | Release ready       | CI checks green and docs finalized           |

## Schedule (Suggested)

| Week | Activities                             |
| ---- | -------------------------------------- |
| 1    | Scope, requirements, and design drafts |
| 2    | Implement two methods and basic tests  |
| 3    | Add edge-case tests and fix defects    |
| 4    | CI validation and final documentation  |

## Risks and Mitigations

| Risk                               | Impact                 | Mitigation                           |
| ---------------------------------- | ---------------------- | ------------------------------------ |
| Ambiguous behavior for duplicates  | Wrong indices returned | Define deterministic behavior in SRS |
| Incomplete edge-case coverage      | Hidden defects         | Use boundary and negative tests      |
| Build differences across platforms | CI/local mismatch      | Use standard C++20 flags in CI       |

## Definition of Done

- Requirements and design documents completed.
- Source code for both methods is present.
- All mandatory tests pass locally and in CI.
- Traceability document links requirements, design, and tests.
