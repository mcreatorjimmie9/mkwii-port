#include "test_framework.hpp"

// Global test counters — defined here, declared extern in test_framework.hpp
int g_passed = 0;
int g_failed = 0;
int g_skipped = 0;

void test_physics_constants();
void test_vehicle_stats();
void test_item_probability();
void test_drift_mechanics();
void test_offroad();
void test_handling();

int main() {
    printf("==========================================================\n");
    printf("  Mario Kart Wii — Physics Validation Test Suite\n");
    printf("  MAESTRO Phase 6: NEWTON Agent\n");
    printf("==========================================================\n");

    test_physics_constants();
    test_vehicle_stats();
    test_item_probability();
    test_drift_mechanics();
    test_offroad();
    test_handling();

    int total = g_passed + g_failed + g_skipped;
    printf("\n==========================================================\n");
    printf("  RESULTS: %d/%d passed", g_passed, total);
    if (g_failed > 0) printf(", %d FAILED", g_failed);
    printf("\n==========================================================\n");
    return g_failed;
}
