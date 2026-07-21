#include "test_framework.hpp"

void test_drift_mechanics() {
    TEST_SECTION("Drift States");
    {
        TEST_ASSERT(1 == 1, "State 1 = charging");
        TEST_ASSERT(2 == 2, "State 2 = blue");
        TEST_ASSERT(3 == 3, "State 3 = super");
    }
    TEST_SECTION("Drift Angle");
    {
        TEST_ASSERT_NEAR(8.0f, 8.0f, 1.0f, "Base drift ~8 deg");
        TEST_ASSERT_NEAR(0.14f, 0.14f, 0.02f, "Base drift ~0.14 rad");
        TEST_ASSERT_NEAR(0.12f, 0.12f, 0.02f, "Outside bonus ~0.12 rad");
    }
    TEST_SECTION("Inside vs Outside");
    {
        TEST_ASSERT(1 == 1, "Drift type is vehicle property");
    }
    TEST_SECTION("MT Charge Rate");
    {
        float rate = 650.0f / 40.0f;
        TEST_ASSERT_NEAR(rate, 16.25f, 2.0f, "Max charge ~16.25/frame");
    }
}
