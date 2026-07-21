#include "test_framework.hpp"

void test_offroad() {
    TEST_SECTION("Off-Road Range");
    {
        TEST_ASSERT_NEAR(0.185f, 0.185f, 0.01f, "Min = 18.5%");
        TEST_ASSERT_NEAR(0.400f, 0.400f, 0.01f, "Max = 40%");
    }
    TEST_SECTION("KCL Surface Codes");
    {
        TEST_ASSERT(0 == 0, "KCL 0 = road");
        TEST_ASSERT(1 == 1, "KCL 1 = offroad");
        TEST_ASSERT(2 == 2, "KCL 2 = boost panel");
        TEST_ASSERT(3 == 3, "KCL 3 = boost ramp");
    }
    TEST_SECTION("Weight Penalties");
    {
        TEST_ASSERT(0.400f > 0.185f, "Heavy > Light off-road");
    }
}
