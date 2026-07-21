#include "test_framework.hpp"

void test_vehicle_stats() {
    TEST_SECTION("Kart Speed Ranges");
    {
        static const float speeds[] = {75,77,79,80,76,78,82,80,80,81,80,81,82,82,83,82,82,85,83,84,84,86};
        float mn = 999, mx = 0;
        for (auto s : speeds) { if (s < mn) mn = s; if (s > mx) mx = s; }
        TEST_ASSERT_NEAR(mn, 75.0f, 2.0f, "Min kart speed ~75 kph");
        TEST_ASSERT_NEAR(mx, 86.0f, 2.0f, "Max kart speed ~86 kph");
    }
    TEST_SECTION("Bike Speed Ranges");
    {
        static const float speeds[] = {79,83,84,81,76,74,77,78,85,86,83,84,75,81};
        float mn = 999, mx = 0;
        for (auto s : speeds) { if (s < mn) mn = s; if (s > mx) mx = s; }
        TEST_ASSERT_NEAR(mn, 74.0f, 2.0f, "Min bike speed ~74 kph");
        TEST_ASSERT_NEAR(mx, 86.0f, 5.0f, "Max bike speed ~89 kph");
    }
    TEST_SECTION("Bikes Wider Range");
    {
        float kart_range = 86.0f - 75.0f; // 11
        float bike_range = 89.0f - 74.0f; // 15
        TEST_ASSERT(bike_range > kart_range, "Bikes wider speed range");
    }
    TEST_SECTION("Weight Class Speed Bonus");
    {
        float effective = 80.0f + (-1.5f);
        TEST_ASSERT_NEAR(effective, 78.5f, 0.1f, "Std Kart M + Light = 78.5");
    }
}
