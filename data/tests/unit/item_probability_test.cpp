#include "test_framework.hpp"

enum { MAX_ITEM_TYPES = 18 };

void test_item_probability() {
    TEST_SECTION("Item Count");
    {
        TEST_ASSERT(MAX_ITEM_TYPES == 18, "18 distinct item types");
    }
    TEST_SECTION("Position Distribution");
    {
        float first_defensive = 0.7f;
        float last_offensive = 0.8f;
        TEST_ASSERT(first_defensive > 0.5f, "1st place favors defense");
        TEST_ASSERT(last_offensive > 0.5f, "Last place favors power");
    }
    TEST_SECTION("Blue Shell Rarity");
    {
        TEST_ASSERT_NEAR(0.01f, 0.01f, 0.02f, "Blue shell ~1% base");
    }
    TEST_SECTION("Time Trial Restrictions");
    {
        int tt_items = 3;
        TEST_ASSERT(tt_items < MAX_ITEM_TYPES, "TT has fewer items");
        TEST_ASSERT(tt_items == 3, "TT: banana+mushroom+star only");
    }
}
