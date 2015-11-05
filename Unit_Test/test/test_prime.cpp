/*
 * test_prime.cpp
 *
 *  Created on: 05.11.2015
 *      Author: sthangavelmurugesa
 */

# include "gtest/gtest.h"
# include "Prime.h"

TEST(PrimeNumberTest, negative) {
        EXPECT_EQ(false, IsPrime(4));
        EXPECT_EQ(false, IsPrime(6));
}


TEST(PrimeNumberTest, postive) {
         EXPECT_EQ(true, IsPrime(2));
         EXPECT_EQ(true, IsPrime(3));
         EXPECT_EQ(true, IsPrime(5));
}

TEST(PrimeNumberTest, FaultyTest) {
         EXPECT_EQ(false, IsPrime(2));
}


