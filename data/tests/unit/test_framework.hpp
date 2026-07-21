#pragma once
// test_framework.hpp — Shared test macros for physics validation

#include <cstdio>
#include <cmath>

extern int g_passed;
extern int g_failed;
extern int g_skipped;

#define TEST_ASSERT(expr, msg) do { \
    if (expr) { g_passed++; } \
    else { g_failed++; printf("  FAIL: %s\n", msg); } \
} while(0)

#define TEST_ASSERT_NEAR(actual, expected, tol, msg) do { \
    float _a = (float)(actual), _e = (float)(expected); \
    float _d = _a > _e ? _a - _e : _e - _a; \
    if (_d <= (float)(tol)) { g_passed++; } \
    else { g_failed++; printf("  FAIL: %s (expected=%.4f, actual=%.4f, diff=%.6f)\n", msg, _e, _a, _d); } \
} while(0)

#define TEST_SECTION(name) printf("\n=== %s ===\n", name)
