#include "test_common.h"

// ============================================================================
//                     GLOBAL TEST COUNTERS
// ============================================================================

int testsRun = 0;
int testsPassed = 0;
int testsFailed = 0;

// ============================================================================
//                      TEST UTILITIES IMPLEMENTATION
// ============================================================================

void assertVectorsEqual(const vector<int>& actual, const vector<int>& expected, 
                        const char* testName) {
    testsRun++;
    
    // Handle empty results
    if (actual.empty() && expected.empty()) {
        testsPassed++;
        cout << "  [PASS] " << testName << endl;
        return;
    }
    
    // Check if sizes match
    if (actual.size() != expected.size()) {
        testsFailed++;
        cout << "  [FAIL] " << testName << " - Size mismatch" << endl;
        return;
    }
    
    // For this problem, both [i,j] and [j,i] are valid (indices of two numbers)
    bool matches = (actual[0] == expected[0] && actual[1] == expected[1]) ||
                   (actual[0] == expected[1] && actual[1] == expected[0]);
    
    if (matches) {
        testsPassed++;
        cout << "  [PASS] " << testName << endl;
    } else {
        testsFailed++;
        cout << "  [FAIL] " << testName 
             << " - Expected [" << expected[0] << "," << expected[1] << "]"
             << " Got [" << actual[0] << "," << actual[1] << "]" << endl;
    }
}
