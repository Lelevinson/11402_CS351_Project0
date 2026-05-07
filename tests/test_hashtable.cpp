#include "test_common.h"
#include "../src/twosum.cpp"

// ============================================================================
//           TESTS FOR TWOSUM HASHTABLE (Optimized) - NORMAL CASES
// ============================================================================

void testTwoSumHashTableNormalCases() {
    cout << "\n=== TwoSumHashTable - Normal Cases ===" << endl;
    
    // Test 25: Basic example
    assertVectorsEqual(
        twoSumHashTable({2, 7, 11, 15}, 9),
        {0, 1},
        "Normal: [2,7,11,15] target=9"
    );
    
    // Test 26: Different numbers
    assertVectorsEqual(
        twoSumHashTable({3, 2, 4}, 6),
        {1, 2},
        "Normal: [3,2,4] target=6"
    );
    
    // Test 27: Unsorted array
    assertVectorsEqual(
        twoSumHashTable({5, 1, 9, 2, 7}, 10),
        {1, 2},
        "Normal: [5,1,9,2,7] target=10"
    );
    
    // Test 28: Solution at end
    assertVectorsEqual(
        twoSumHashTable({1, 2, 3, 4, 5}, 9),
        {3, 4},
        "Normal: [1,2,3,4,5] target=9"
    );
    
    // Test 29: Solution at beginning
    assertVectorsEqual(
        twoSumHashTable({10, 20, 8, 9}, 18),
        {0, 3},
        "Normal: [10,20,8,9] target=18"
    );
    
    // Test 30: Larger array
    assertVectorsEqual(
        twoSumHashTable({1, 3, 5, 7, 9, 11, 13, 15}, 18),
        {3, 5},
        "Normal: [1,3,5,7,9,11,13,15] target=18"
    );
}

// ============================================================================
//         TESTS FOR TWOSUM HASHTABLE (Optimized) - NEGATIVE NUMBERS
// ============================================================================

void testTwoSumHashTableNegativeNumbers() {
    cout << "\n=== TwoSumHashTable - Negative Numbers ===" << endl;
    
    // Test 31: All negative numbers
    assertVectorsEqual(
        twoSumHashTable({-1, -2, -3, -4, -5}, -8),
        {2, 4},
        "Negative: [-1,-2,-3,-4,-5] target=-8"
    );
    
    // Test 32: Mixed positive and negative
    assertVectorsEqual(
        twoSumHashTable({-3, 4, 3, 90}, 0),
        {0, 2},
        "Mixed: [-3,4,3,90] target=0"
    );
    
    // Test 33: Negative and positive, target is negative
    assertVectorsEqual(
        twoSumHashTable({-10, 5, 2, 8}, -5),
        {0, 1},
        "Mixed: [-10,5,2,8] target=-5"
    );
    
    // Test 34: Target zero with negative numbers
    assertVectorsEqual(
        twoSumHashTable({-5, 0, 5, 10}, 0),
        {0, 2},
        "Mixed: [-5,0,5,10] target=0"
    );
}

// ============================================================================
//            TESTS FOR TWOSUM HASHTABLE (Optimized) - DUPLICATES
// ============================================================================

void testTwoSumHashTableDuplicates() {
    cout << "\n=== TwoSumHashTable - Duplicates ===" << endl;
    
    // Test 35: Same number twice
    assertVectorsEqual(
        twoSumHashTable({3, 3}, 6),
        {0, 1},
        "Duplicate: [3,3] target=6"
    );
    
    // Test 36: Multiple duplicates in array
    assertVectorsEqual(
        twoSumHashTable({2, 5, 5, 11}, 10),
        {1, 2},
        "Duplicate: [2,5,5,11] target=10"
    );
    
    // Test 37: Multiple pairs of duplicates
    assertVectorsEqual(
        twoSumHashTable({1, 1, 2, 2, 3, 3}, 4),
        {0, 3},
        "Duplicate: [1,1,2,2,3,3] target=4"
    );
    
    // Test 38: Many duplicates of same number
    assertVectorsEqual(
        twoSumHashTable({5, 5, 5, 5, 5}, 10),
        {0, 1},
        "Duplicate: [5,5,5,5,5] target=10"
    );
}

// ============================================================================
//          TESTS FOR TWOSUM HASHTABLE (Optimized) - LARGE NUMBERS
// ============================================================================

void testTwoSumHashTableLargeNumbers() {
    cout << "\n=== TwoSumHashTable - Large Numbers ===" << endl;
    
    // Test 39: Very large positive numbers
    assertVectorsEqual(
        twoSumHashTable({1000000000, 999999999, 1}, 1000000001),
        {0, 2},
        "Large: [1000000000,999999999,1] target=1000000001"
    );
    
    // Test 40: Very large negative numbers
    assertVectorsEqual(
        twoSumHashTable({-1000000000, -999999999, -1}, -1999999999),
        {0, 1},
        "Large: [-1000000000,-999999999,-1] target=-1999999999"
    );
    
    // Test 41: Mix of very large numbers
    assertVectorsEqual(
        twoSumHashTable({INT_MIN + 1, INT_MAX - 1, 100}, INT_MAX),
        {0, 1},
        "Large: [INT_MIN+1, INT_MAX-1, 100] target=INT_MAX"
    );
}

// ============================================================================
//        TESTS FOR TWOSUM HASHTABLE (Optimized) - BOUNDARY CONDITIONS
// ============================================================================

void testTwoSumHashTableBoundaryConditions() {
    cout << "\n=== TwoSumHashTable - Boundary Conditions ===" << endl;
    
    // Test 42: Minimum array size (exactly 2 elements)
    assertVectorsEqual(
        twoSumHashTable({10, 20}, 30),
        {0, 1},
        "Boundary: [10,20] target=30 - minimum size"
    );
    
    // Test 43: Array with zeros
    assertVectorsEqual(
        twoSumHashTable({0, 4, 3, 0}, 0),
        {0, 3},
        "Boundary: [0,4,3,0] target=0 - zeros"
    );
    
    // Test 44: Single zero value combined with negative
    assertVectorsEqual(
        twoSumHashTable({-5, 0, 5}, 0),
        {0, 2},
        "Boundary: [-5,0,5] target=0 - zero boundary"
    );
    
    // Test 45: Array containing only zeros (edge case)
    assertVectorsEqual(
        twoSumHashTable({0, 1, 0}, 0),
        {0, 2},
        "Boundary: [0,1,0] target=0 - zeros with number"
    );
}

// ============================================================================
//           TESTS FOR TWOSUM HASHTABLE (Optimized) - SPECIAL CASES
// ============================================================================

void testTwoSumHashTableSpecialCases() {
    cout << "\n=== TwoSumHashTable - Special Cases ===" << endl;
    
    // Test 46: Very small target with large array
    assertVectorsEqual(
        twoSumHashTable({100, 200, 300, 400, 500, 1, 2}, 3),
        {5, 6},
        "Special: Large array with small target"
    );
    
    // Test 47: Alternating positive/negative
    assertVectorsEqual(
        twoSumHashTable({-1, 2, -3, 4, -5, 6}, 1),
        {0, 1},
        "Special: Alternating pos/neg [-1,2,-3,4,-5,6] target=1"
    );
    
    // Test 48: Sorted descending
    assertVectorsEqual(
        twoSumHashTable({15, 11, 7, 2}, 18),
        {1, 2},
        "Special: Descending [15,11,7,2] target=18"
    );
}
