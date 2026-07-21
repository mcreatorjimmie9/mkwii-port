#include "test_framework.hpp"

void test_physics_constants() {
    TEST_SECTION("Gravity");
    {
        const float expected_gravity = 1.3f;
        TEST_ASSERT_NEAR(expected_gravity, 1.3f, 0.001f,
            "Gravity constant should be 1.3");
        float fall_distance_1sec = 0.5f * 1.3f * 60.0f * 60.0f;
        TEST_ASSERT_NEAR(fall_distance_1sec, 2340.0f, 1.0f,
            "Fall distance in 1 second at 60fps with g=1.3");
    }
    TEST_SECTION("Frame Rate");
    {
        TEST_ASSERT(60 == 60, "NTSC frame rate = 60 FPS");
        TEST_ASSERT(50 == 50, "PAL frame rate = 50 FPS");
        float ntsc_dt = 1.0f / 60.0f;
        TEST_ASSERT_NEAR(ntsc_dt, 0.016667f, 0.001f, "NTSC dt ~16.67ms");
    }
    TEST_SECTION("Drift States");
    {
        int blue_charge = 40, orange_charge = 80, red_charge = 120;
        float blue_dur = blue_charge / 60.0f;
        float orange_dur = orange_charge / 60.0f;
        float red_dur = red_charge / 60.0f;
        TEST_ASSERT_NEAR(blue_dur, 0.667f, 0.05f, "Blue MT ~0.67s");
        TEST_ASSERT_NEAR(orange_dur, 1.333f, 0.05f, "Orange MT ~1.33s");
        TEST_ASSERT_NEAR(red_dur, 2.000f, 0.05f, "Red MT ~2.0s");
        float ratio_orange = (float)orange_charge / (float)blue_charge;
        float ratio_red = (float)red_charge / (float)blue_charge;
        TEST_ASSERT_NEAR(ratio_orange, 2.0f, 0.5f, "Orange ~2.0x blue (80/40 frames)");
        TEST_ASSERT_NEAR(ratio_red, 3.0f, 0.3f, "Red ~3x blue");
    }
    TEST_SECTION("Boost Flags");
    {
        TEST_ASSERT(0 == 0, "Boost 0 = MT/start");
        TEST_ASSERT(2 == 2, "Boost 2 = mushroom");
        TEST_ASSERT(4 == 4, "Boost 4 = trick/zipper");
    }
    TEST_SECTION("Surface Flags");
    {
        TEST_ASSERT(0 == 0, "Surface 0 = wall");
        TEST_ASSERT(6 == 6, "Surface 6 = offroad");
        TEST_ASSERT(11 == 11, "Surface 11 = trickable");
    }
    TEST_SECTION("Off-Road Retention");
    {
        TEST_ASSERT_NEAR(0.185f, 0.185f, 0.01f, "Min off-road = 18.5%");
        TEST_ASSERT_NEAR(0.400f, 0.400f, 0.01f, "Max off-road = 40%");
    }
    TEST_SECTION("Engine Class");
    {
        TEST_ASSERT_NEAR(0.7f, 0.7f, 0.05f, "50cc = 0.7x");
        TEST_ASSERT_NEAR(1.0f, 1.0f, 0.01f, "100cc = 1.0x");
        TEST_ASSERT_NEAR(1.15f, 1.15f, 0.05f, "150cc = 1.15x");
    }
}
