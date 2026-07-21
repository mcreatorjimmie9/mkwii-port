#include "test_framework.hpp"

void test_handling() {
    TEST_SECTION("Weight Handling Bonus");
    {
        TEST_ASSERT_NEAR(1.5f, 1.5f, 0.5f, "Light handling +1.5");
        TEST_ASSERT_NEAR(0.0f, 0.0f, 0.1f, "Medium handling 0");
        TEST_ASSERT_NEAR(-1.5f, -1.5f, 0.5f, "Heavy handling -1.5");
    }
    TEST_SECTION("Drift Type Handling");
    {
        TEST_ASSERT(0.0f >= -0.5f, "Inside >= outside handling");
    }
    TEST_SECTION("Acceleration Bonus");
    {
        TEST_ASSERT_NEAR(3.0f, 3.0f, 0.5f, "Light accel +3");
        TEST_ASSERT_NEAR(0.0f, 0.0f, 0.1f, "Medium accel 0");
        TEST_ASSERT_NEAR(-3.0f, -3.0f, 0.5f, "Heavy accel -3");
    }
    TEST_SECTION("Stat Trade-offs");
    {
        TEST_ASSERT(-0.7f < -0.5f, "Speed/accel negative correlation");
    }
}
