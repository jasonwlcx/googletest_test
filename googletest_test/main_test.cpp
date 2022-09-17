#include <gtest/gtest.h>
#include "Checkout.hpp"

TEST(googletest_test, AssertTrue){
    ASSERT_TRUE(true);
}

TEST(googletest_test, CanAssert){
    ASSERT_TRUE(true);
}

TEST(googletest_test, CanInstantiateCheckout){
    Checkout co;
}
