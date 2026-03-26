# 06 - Requirements Traceability

## Traceability Matrix

| Requirement                  | Design Reference    | Test Reference      | Status  |
| ---------------------------- | ------------------- | ------------------- | ------- |
| FR-01 Input array accepted   | SDS Section 2, 3    | AT-01 to AT-08      | Planned |
| FR-02 Target accepted        | SDS Section 2, 3    | AT-01 to AT-08      | Planned |
| FR-03 Brute force method     | SDS Section 2.1     | AT-01 to AT-08      | Planned |
| FR-04 Hash-table method      | SDS Section 2.2     | AT-01 to AT-08      | Planned |
| FR-05 Return indices         | SDS Section 3       | AT-01 to AT-05      | Planned |
| FR-06 Distinct valid indices | SDS Section 5       | AT-01 to AT-05      | Planned |
| FR-07 Deterministic policy   | SDS Section 7       | AT-01, AT-02, AT-03 | Planned |
| FR-08 No-solution behavior   | SDS Section 5       | AT-06, AT-07, AT-08 | Planned |
| NFR-01 C++20 build           | SDS Section 1       | CI build job        | Planned |
| NFR-04 Test coverage classes | Test Plan Section 5 | AT-01 to AT-08      | Planned |
| NFR-05 CI on push/PR         | Deploy Section CI   | CI workflow checks  | Planned |

## Notes

- Update `Status` from Planned to Verified after test execution.
- Add links to actual test files once implemented.
