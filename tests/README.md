# Test Suite - Developer Guide

## 📁 Professional Test Structure

This test suite is organized in a **professional, scalable way** that developers use in real projects:

```
tests/
├── test_common.h           ← Shared utilities and declarations
├── test_common.cpp         ← Global test counters and assertion function
├── test_array.cpp          ← All 24 tests for TwoSumArray
├── test_hashtable.cpp      ← All 24 tests for TwoSumHashTable
└── main.cpp                ← Main orchestrator that runs all tests
```

---

## 🏗️ Architecture Explanation

### **Separation of Concerns**

| File | Purpose | Responsibility |
|------|---------|-----------------|
| `test_common.h` | **Header** - Declarations | Declares all test functions + utilities |
| `test_common.cpp` | **Utilities** - Implementation | Shared code (assertion, counters) |
| `test_array.cpp` | **Test Group 1** | 24 tests for brute force algorithm |
| `test_hashtable.cpp` | **Test Group 2** | 24 tests for optimized algorithm |
| `main.cpp` | **Orchestrator** | Calls all test groups + prints summary |

### **How It Works**

```
1. main.cpp includes test_common.h
   └─ Gets declarations of all test functions
   
2. main.cpp calls each test group:
   - testTwoSumArrayNormalCases()
   - testTwoSumArrayNegativeNumbers()
   - ... etc
   
3. Each test file (test_array.cpp, test_hashtable.cpp):
   - Includes test_common.h
   - Includes the actual implementation (src/twosum.cpp)
   - Defines its test functions
   
4. test_common.cpp provides:
   - Global counters: testsRun, testsPassed, testsFailed
   - assertVectorsEqual() function implementation
```

---

## 💻 How to Compile

### **Option 1: Compile All Files (Recommended)**

```bash
# Compile all test files and link them together
g++ -std=c++20 -Wall -Wextra -o test_program \
    tests/test_common.cpp \
    tests/test_array.cpp \
    tests/test_hashtable.cpp \
    tests/main.cpp

# Run the tests
./test_program
```

### **Option 2: Using Make (Automated)**

If you update the Makefile (recommended):

```makefile
TESTS = tests/test_common.cpp \
        tests/test_array.cpp \
        tests/test_hashtable.cpp \
        tests/main.cpp

test:
	g++ -std=c++20 -o test_program $(TESTS)
	./test_program
```

Then just run:
```bash
make test
```

### **Option 3: Step by Step**

```bash
# Compile to object files
g++ -std=c++20 -c tests/test_common.cpp -o test_common.o
g++ -std=c++20 -c tests/test_array.cpp -o test_array.o
g++ -std=c++20 -c tests/test_hashtable.cpp -o test_hashtable.o
g++ -std=c++20 -c tests/main.cpp -o test_main.o

# Link them all
g++ -o test_program test_common.o test_array.o test_hashtable.o test_main.o

# Run
./test_program
```

---

## 🎯 Why This Structure Is Professional

### ✅ **Advantages**

| Advantage | Benefit |
|-----------|---------|
| **Separation of Concerns** | Each file has one responsibility |
| **Maintainability** | Easy to find and modify specific tests |
| **Scalability** | Easy to add new test files later |
| **Reusability** | `test_common.h` can be shared across projects |
| **Faster Compilation** | Can compile specific files without recompiling everything |
| **Clear Organization** | New developers understand the structure immediately |
| **Industry Standard** | Uses patterns from Google, Microsoft, etc. |

### 🔄 **Easy to Extend**

Want to add more tests? Just add another test function file:

```cpp
// tests/test_performance.cpp
#include "test_common.h"
#include "../src/twosum.cpp"

void testPerformance() {
    cout << "\n=== Performance Tests ===" << endl;
    // ... performance tests
}
```

Then add to `main.cpp`:
```cpp
testPerformance();
```

---

## 📊 Test Breakdown

| File | Tests | Categories |
|------|-------|------------|
| **test_array.cpp** | 24 | Normal, Negative, Duplicates, Large, Boundary, Special |
| **test_hashtable.cpp** | 24 | Normal, Negative, Duplicates, Large, Boundary, Special |
| **TOTAL** | 48 | Comprehensive coverage |

---

## 🚀 Expected Output

When you compile and run, you'll see:

```
====================================================================
                   TWO SUM - COMPREHENSIVE TEST SUITE
====================================================================

=== TwoSumArray - Normal Cases ===
  [PASS] Normal: [2,7,11,15] target=9
  [PASS] Normal: [3,2,4] target=6
  ...
=== TwoSumArray - Negative Numbers ===
  [PASS] Negative: [-1,-2,-3,-4,-5] target=-8
  ...
=== TwoSumHashTable - Normal Cases ===
  [PASS] Normal: [2,7,11,15] target=9
  ...

====================================================================
                         TEST SUMMARY
====================================================================
Total Tests Run:    48
Tests Passed:       48
Tests Failed:       0
====================================================================
✅ ALL TESTS PASSED! 🎉
====================================================================
```

---

## 🔍 What Happens Behind the Scenes

### **Compilation Process**

```
test_common.cpp → test_common.o (defines global counters + assertions)
test_array.cpp  → test_array.o  (defines array test functions)
test_hashtable.cpp → test_hashtable.o (defines hashtable test functions)
main.cpp        → test_main.o   (defines main())
                ↓
            (Link all)
                ↓
           test_program (executable)
```

### **Runtime Process**

```
test_program starts
  ↓
main() executes
  ↓
Calls testTwoSumArrayNormalCases()
  └─ Calls 6 assertVectorsEqual() functions
  └─ Updates global counters
  ↓
Calls testTwoSumArrayNegativeNumbers()
  └─ Calls 4 assertVectorsEqual() functions
  └─ Updates global counters
  ↓
... (continues for all test functions)
  ↓
Prints summary
  ↓
Returns exit code (0 = success, 1 = failure)
```

---

## 📋 File Purposes (Quick Reference)

```cpp
// test_common.h
- extern declarations (doesn't allocate memory)
- Declares global counters
- Declares all test functions
- Declares assertVectorsEqual()

// test_common.cpp
- Initializes global counters: testsRun, testsPassed, testsFailed
- Implements assertVectorsEqual() function
- Shared code used by all test files

// test_array.cpp
- Implements 6 test functions for TwoSumArray
- Each function contains 4 tests
- Total: 24 tests for brute force algorithm

// test_hashtable.cpp
- Implements 6 test functions for TwoSumHashTable
- Each function contains 4 tests
- Total: 24 tests for optimized algorithm

// main.cpp
- Single main() function
- Calls all 12 test functions
- Prints final summary
- Returns appropriate exit code
```

---

## ✨ Why This Matters

This structure shows you understand:
- ✅ **Code Organization** - Professional developers organize tests
- ✅ **Header Files** - Using .h for declarations
- ✅ **Compilation Process** - Multiple .cpp files compiling together
- ✅ **Separation of Concerns** - Each file has a clear purpose
- ✅ **Scalability** - Easy to add more tests
- ✅ **Real-World Practices** - How companies organize their test suites

Your teacher will be impressed! 🎉

---

## 🤔 Still Have Questions?

**Q: Why separate files instead of one big file?**
A: Professional code is easier to maintain, understand, and scale.

**Q: What if I only want to test TwoSumArray?**
A: You can create a separate main file that only calls array tests, or modify the existing one.

**Q: Can I use a testing framework like Catch2?**
A: Yes! This structure is compatible with frameworks. Just replace assertions with framework macros.

**Q: Will GitHub Actions handle this?**
A: Yes! GitHub Actions will compile all files and run the tests automatically.
