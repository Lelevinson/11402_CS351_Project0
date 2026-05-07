#include "test_common.h"
#include "../src/twosum.cpp"

// ============================================================================
//              TESTS FOR TWOSUM ARRAY (Brute Force) - NORMAL CASES
// ============================================================================

void testTwoSumArrayNormalCases() {
    cout << "\n=== TwoSumArray - Normal Cases ===" << endl;
    
    // Test 1: Basic example from problem statement
    assertVectorsEqual(
        twoSumArray({2, 7, 11, 15}, 9),
        {0, 1},
        "Normal: [2,7,11,15] target=9"
    );
    
    // Test 2: Different numbers
    assertVectorsEqual(
        twoSumArray({3, 2, 4}, 6),
        {1, 2},
        "Normal: [3,2,4] target=6"
    );
    
    // Test 3: Unsorted array
    assertVectorsEqual(
        twoSumArray({5, 1, 9, 2, 7}, 10),
        {1, 2},
        "Normal: [5,1,9,2,7] target=10"
    );
    
    // Test 4: Solution at end
    assertVectorsEqual(
        twoSumArray({1, 2, 3, 4, 5}, 9),
        {3, 4},
        "Normal: [1,2,3,4,5] target=9"
    );
    
    // Test 5: Solution at beginning
    assertVectorsEqual(
        twoSumArray({10, 20, 8, 9}, 18),
        {0, 3},
        "Normal: [10,20,8,9] target=18"
    );
    
    // Test 6: Larger array
    assertVectorsEqual(
        twoSumArray({1, 3, 5, 7, 9, 11, 13, 15}, 18),
        {3, 5},
        "Normal: [1,3,5,7,9,11,13,15] target=18"
    );
}

// ============================================================================
//            TESTS FOR TWOSUM ARRAY (Brute Force) - NEGATIVE NUMBERS
// ============================================================================

void testTwoSumArrayNegativeNumbers() {
    cout << "\n=== TwoSumArray - Negative Numbers ===" << endl;
    
    // Test 7: All negative numbers
    assertVectorsEqual(
        twoSumArray({-1, -2, -3, -4, -5}, -8),
        {2, 4},
        "Negative: [-1,-2,-3,-4,-5] target=-8"
    );
    
    // Test 8: Mixed positive and negative
    assertVectorsEqual(
        twoSumArray({-3, 4, 3, 90}, 0),
        {0, 2},
        "Mixed: [-3,4,3,90] target=0"
    );
    
    // Test 9: Negative and positive, target is negative
    assertVectorsEqual(
        twoSumArray({-10, 5, 2, 8}, -5),
        {0, 1},
        "Mixed: [-10,5,2,8] target=-5"
    );
    
    // Test 10: Target zero with negative numbers
    assertVectorsEqual(
        twoSumArray({-5, 0, 5, 10}, 0),
        {0, 2},
        "Mixed: [-5,0,5,10] target=0"
    );
}

// ============================================================================
//              TESTS FOR TWOSUM ARRAY (Brute Force) - DUPLICATES
// ============================================================================

void testTwoSumArrayDuplicates() {
    cout << "\n=== TwoSumArray - Duplicates ===" << endl;
    
    // Test 11: Same number twice (indices matter, not values)
    assertVectorsEqual(
        twoSumArray({3, 3}, 6),
        {0, 1},
        "Duplicate: [3,3] target=6"
    );
    
    // Test 12: Multiple duplicates in array
    assertVectorsEqual(
        twoSumArray({2, 5, 5, 11}, 10),
        {1, 2},
        "Duplicate: [2,5,5,11] target=10"
    );
    
    // Test 13: Multiple pairs of duplicates
    assertVectorsEqual(
        twoSumArray({1, 1, 2, 2, 3, 3}, 4),
        {0, 3},
        "Duplicate: [1,1,2,2,3,3] target=4"
    );
    
    // Test 14: Many duplicates of same number
    assertVectorsEqual(
        twoSumArray({5, 5, 5, 5, 5}, 10),
        {0, 1},
        "Duplicate: [5,5,5,5,5] target=10"
    );
}

// ============================================================================
//            TESTS FOR TWOSUM ARRAY (Brute Force) - LARGE NUMBERS
// ============================================================================

void testTwoSumArrayLargeNumbers() {
    cout << "\n=== TwoSumArray - Large Numbers ===" << endl;
    
    // Test 15: Very large positive numbers
    assertVectorsEqual(
        twoSumArray({1000000000, 999999999, 1}, 1000000001),
        {0, 2},
        "Large: [1000000000,999999999,1] target=1000000001"
    );
    
    // Test 16: Very large negative numbers
    assertVectorsEqual(
        twoSumArray({-1000000000, -999999999, -1}, -1999999999),
        {0, 1},
        "Large: [-1000000000,-999999999,-1] target=-1999999999"
    );
    
    // Test 17: Mix of very large numbers
    assertVectorsEqual(
        twoSumArray({INT_MIN + 1, INT_MAX - 1, 100}, INT_MAX),
        {0, 1},
        "Large: [INT_MIN+1, INT_MAX-1, 100] target=INT_MAX"
    );
}

// ============================================================================
//          TESTS FOR TWOSUM ARRAY (Brute Force) - BOUNDARY CONDITIONS
// ============================================================================

void testTwoSumArrayBoundaryConditions() {
    cout << "\n=== TwoSumArray - Boundary Conditions ===" << endl;
    
    // Test 18: Minimum array size (exactly 2 elements)
    assertVectorsEqual(
        twoSumArray({10, 20}, 30),
        {0, 1},
        "Boundary: [10,20] target=30 - minimum size"
    );
    
    // Test 19: Array with zeros
    assertVectorsEqual(
        twoSumArray({0, 4, 3, 0}, 0),
        {0, 3},
        "Boundary: [0,4,3,0] target=0 - zeros"
    );
    
    // Test 20: Single zero value combined with negative
    assertVectorsEqual(
        twoSumArray({-5, 0, 5}, 0),
        {0, 2},
        "Boundary: [-5,0,5] target=0 - zero boundary"
    );
    
    // Test 21: Array containing only zeros (impossible but edge case)
    assertVectorsEqual(
        twoSumArray({0, 1, 0}, 0),
        {0, 2},
        "Boundary: [0,1,0] target=0 - zeros with number"
    );
}

// ============================================================================
//            TESTS FOR TWOSUM ARRAY (Brute Force) - SPECIAL CASES
// ============================================================================

void testTwoSumArraySpecialCases() {
    cout << "\n=== TwoSumArray - Special Cases ===" << endl;
    
    // Test 22: Very small target with large array
    assertVectorsEqual(
        twoSumArray({100, 200, 300, 400, 500, 1, 2}, 3),
        {5, 6},
        "Special: Large array with small target"
    );
    
    // Test 23: Alternating positive/negative
    assertVectorsEqual(
        twoSumArray({-1, 2, -3, 4, -5, 6}, 1),
        {0, 1},
        "Special: Alternating pos/neg [-1,2,-3,4,-5,6] target=1"
    );
    
    // Test 24: Sorted descending
    assertVectorsEqual(
        twoSumArray({15, 11, 7, 2}, 18),
        {1, 2},
        "Special: Descending [15,11,7,2] target=18"
    );
}
