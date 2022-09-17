#include <gtest/gtest.h>
#include "Checkout.hpp"


class CheckoutTests : public ::testing::Test {
public:
    
protected:
    Checkout checkOut;
};

TEST(googletest_test, AssertTrue){
    ASSERT_TRUE(true);
}

TEST(googletest_test, CanAssert){
    ASSERT_TRUE(true);
}

TEST_F(CheckoutTests, CanInstantiateCheckout){
    Checkout co;
}

TEST_F(CheckoutTests, CanAddItemPrice){
    checkOut.addItemPrice("a", 1);
}

TEST_F(CheckoutTests, CanAddItem){
    checkOut.addItem("a");
}
