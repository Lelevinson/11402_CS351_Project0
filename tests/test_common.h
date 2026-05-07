#ifndef TEST_COMMON_H
#define TEST_COMMON_H

#include <iostream>
#include <vector>
#include <climits>

using std::cout;
using std::endl;
using std::vector;

// ============================================================================
//                        GLOBAL TEST COUNTERS
// ============================================================================

extern int testsRun;
extern int testsPassed;
extern int testsFailed;

// ============================================================================
//                          TEST UTILITIES
// ============================================================================

// Implementations under test, defined in src/twosum.cpp and linked once.
vector<int> twoSumArray(const vector<int>& nums, int target);
vector<int> twoSumHashTable(const vector<int>& nums, int target);

/**
 * Assert that two vectors are equal (handles both orderings for this problem)
 * Since the problem allows either [i,j] or [j,i], we accept both.
 */
void assertVectorsEqual(const vector<int>& actual, const vector<int>& expected, 
                        const char* testName);

// ============================================================================
//                       FORWARD DECLARATIONS
// ============================================================================

// These will be implemented in separate files
void testTwoSumArrayNormalCases();
void testTwoSumArrayNegativeNumbers();
void testTwoSumArrayDuplicates();
void testTwoSumArrayLargeNumbers();
void testTwoSumArrayBoundaryConditions();
void testTwoSumArraySpecialCases();

void testTwoSumHashTableNormalCases();
void testTwoSumHashTableNegativeNumbers();
void testTwoSumHashTableDuplicates();
void testTwoSumHashTableLargeNumbers();
void testTwoSumHashTableBoundaryConditions();
void testTwoSumHashTableSpecialCases();

#endif // TEST_COMMON_H
