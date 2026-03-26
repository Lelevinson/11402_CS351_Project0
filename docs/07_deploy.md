# 07 - Build, Run, and Deploy

## 1. Local Build

Example using g++:

```bash
g++ -std=c++20 -O2 -Wall -Wextra -pedantic src/main.cpp src/twosum.cpp -o two_sum
```

Example using clang++:

```bash
clang++ -std=c++20 -O2 -Wall -Wextra -pedantic src/main.cpp src/twosum.cpp -o two_sum
```

## 2. Local Run

```bash
./two_sum
```

## 3. Test Execution

If tests are implemented in `tests/`, compile and run them as part of local validation before pushing.

## 4. CI/CD Deployment

- Trigger: push and pull request to repository branches.
- Steps:
  1.  Checkout repository.
  2.  Configure C++ toolchain.
  3.  Build project with C++20 flags.
  4.  Build and run tests.
  5.  Mark workflow failed if any step fails.

## 5. Release Checklist

- All acceptance tests pass.
- Changelog updated.
- No critical known issues remain unresolved.
