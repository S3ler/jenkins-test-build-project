#include "gtest/gtest.h"

TEST(sample_test_case, test_eq) {
    EXPECT_EQ(1, 1);
}

TEST(sample_test_case, test_ueq) {
    //EXPECT_EQ(0, 1);
    EXPECT_NE(0, 1);
}