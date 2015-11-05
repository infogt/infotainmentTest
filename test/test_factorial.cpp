/*
 * test_factorial.cpp
 *
 *  Created on: 04.11.2015
 *      Author: sthangavelmurugesa
 */

//test_factorial.cpp

# include "gtest/gtest.h"
# include "factorial.h"

TEST(IntegerFunctionTest, negative) {
        EXPECT_EQ(1, factorial(-5));
        EXPECT_EQ(1, factorial(-1));
        EXPECT_GT(factorial(-10), 0);
}


TEST(IntegerFunctionTest, DISABLED_zero) {
         EXPECT_EQ(1, factorial(0));
}

TEST(IntegerFunctionTest, postive) {
         EXPECT_EQ(1, factorial(1));
         EXPECT_EQ(2, factorial(2));
         EXPECT_EQ(6, factorial(3));
         EXPECT_EQ(40320, factorial(8));
}

TEST(IntegerFunctionTest, FaultyTest) {
         EXPECT_EQ(0, factorial(1));
}

