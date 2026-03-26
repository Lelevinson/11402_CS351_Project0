# 08 - Known Issues and Limitations

## Current Limitations

1. The project scope covers a single problem domain (Two Sum) and does not generalize to k-sum variants.
2. Performance claims are complexity-based; no benchmark suite is included yet.
3. Deterministic output behavior must be explicitly enforced in implementation and tests.

## Potential Issues to Watch

1. Integer overflow risk when adding extreme values (implementation should consider safe checks).
2. Ambiguity when multiple valid pairs exist if policy is not consistently applied.
3. Inconsistent handling of no-solution cases across methods if return contract is not shared.

## Recommended Future Improvements

1. Add automated performance benchmarks for both methods.
2. Add property-based tests for randomized inputs.
3. Add static analysis and sanitizer jobs in CI.
4. Extend project with a unified API and configurable strategy selection.
