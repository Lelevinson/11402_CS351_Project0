#include "test_common.h"

// ============================================================================
//                            MAIN TEST RUNNER
// ============================================================================

int main() {
    cout << "====================================================================\n";
    cout << "                   TWO SUM - COMPREHENSIVE TEST SUITE\n";
    cout << "====================================================================\n";
    
    // ========== Run all TwoSumArray tests ==========
    testTwoSumArrayNormalCases();
    testTwoSumArrayNegativeNumbers();
    testTwoSumArrayDuplicates();
    testTwoSumArrayLargeNumbers();
    testTwoSumArrayBoundaryConditions();
    testTwoSumArraySpecialCases();
    
    // ========== Run all TwoSumHashTable tests ==========
    testTwoSumHashTableNormalCases();
    testTwoSumHashTableNegativeNumbers();
    testTwoSumHashTableDuplicates();
    testTwoSumHashTableLargeNumbers();
    testTwoSumHashTableBoundaryConditions();
    testTwoSumHashTableSpecialCases();
    
    // ========== Print summary ==========
    cout << "\n====================================================================\n";
    cout << "                         TEST SUMMARY\n";
    cout << "====================================================================\n";
    cout << "Total Tests Run:    " << testsRun << endl;
    cout << "Tests Passed:       " << testsPassed << endl;
    cout << "Tests Failed:       " << testsFailed << endl;
    cout << "====================================================================\n";
    
    if (testsFailed == 0) {
        cout << "✅ ALL TESTS PASSED! 🎉\n";
        cout << "====================================================================\n";
        return 0;
    } else {
        cout << "❌ SOME TESTS FAILED\n";
        cout << "====================================================================\n";
        return 1;
    }
}
