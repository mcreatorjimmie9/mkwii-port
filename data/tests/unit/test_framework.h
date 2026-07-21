// =============================================================================
// test_framework.h — Test macros, types, and registration for MKWii physics
// =============================================================================

#pragma once
#include <cstdio>
#include <cmath>
#include <vector>
#include <utility>

// --- Globals (defined in test_main.cpp) ---
extern int g_testsRun;
extern int g_testsPassed;
extern int g_testsFailed;
extern int g_currentSuitePassed;
extern int g_currentSuiteFailed;

// --- Assertion macros ---
#define TEST_ASSERT(expr, msg) do { \
    g_testsRun++; \
    if (expr) { g_testsPassed++; g_currentSuitePassed++; } \
    else { g_testsFailed++; g_currentSuiteFailed++; \
        printf("  FAIL: %s (line %d): %s\n", __FILE__, __LINE__, msg); } \
} while(0)

#define TEST_ASSERT_EQ(actual, expected, msg) do { \
    g_testsRun++; \
    long long _a = (long long)(actual); long long _e = (long long)(expected); \
    if (_a == _e) { g_testsPassed++; g_currentSuitePassed++; } \
    else { g_testsFailed++; g_currentSuiteFailed++; \
        printf("  FAIL: %s (line %d): %s [expected=%lld, actual=%lld]\n", \
               __FILE__, __LINE__, msg, _e, _a); } \
} while(0)

#define TEST_ASSERT_NEAR(actual, expected, tol, msg) do { \
    g_testsRun++; \
    double _na = (double)(actual); double _ne = (double)(expected); double _nt = (double)(tol); \
    if (std::fabs(_na - _ne) <= _nt) { g_testsPassed++; g_currentSuitePassed++; } \
    else { g_testsFailed++; g_currentSuiteFailed++; \
        printf("  FAIL: %s (line %d): %s [expected=%.6f, actual=%.6f, tol=%.6f]\n", \
               __FILE__, __LINE__, msg, _ne, _na, _nt); } \
} while(0)

// --- Suite macros ---
#define TEST_SUITE_BEGIN(name) do { \
    g_currentSuitePassed = 0; g_currentSuiteFailed = 0; \
    printf("[%s]\n", name); \
} while(0)

#define TEST_SUITE_END() do { \
    if (g_currentSuiteFailed == 0) \
        printf("  PASSED (%d/%d)\n\n", g_currentSuitePassed, g_currentSuitePassed); \
    else \
        printf("  FAILED (%d passed, %d failed)\n\n", g_currentSuitePassed, g_currentSuiteFailed); \
} while(0)

// --- Registration ---
typedef void (*TestFunc_t)();

// Declared in test_main.cpp
extern std::vector<std::pair<const char*, TestFunc_t>> g_suites;

struct TestRegistrar {
    TestRegistrar(const char* name, TestFunc_t fn) {
        g_suites.push_back({name, fn});
    }
};

#define REGISTER_TEST_SUITE(name, func) \
    static TestRegistrar _reg_##func(name, func);
