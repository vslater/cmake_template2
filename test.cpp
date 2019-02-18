#include "foo.h"
#include <iostream>
#include "gtest/gtest.h"

TEST(MyTest, Fourteens) {
    ASSERT_EQ(14,14);
}

TEST(MyTest, Thirteens) {
    EXPECT_EQ(13,14);
}

int main()
{
    foo();
    std::cout << "Running tests!\n";

    ::testing::InitGoogleTest();

    return RUN_ALL_TESTS();
}