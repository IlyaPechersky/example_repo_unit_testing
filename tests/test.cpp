#include <iostream>

#include <gtest/gtest.h>

#include <my_class.h>

TEST(TestGroup, our_first_test) {
    ASSERT_TRUE(1 == 1);
}

TEST(TestGroup, our_second_test) {
    ASSERT_EQ(true, true);
    std::cout << "test continues\n";
}

TEST(NewTestGroup, sum_test) {
    int value = 100;
    value += 5;

    ASSERT_EQ(value, 105);
}

TEST(MyClassTestGroup, my_class_test) {
    MyClass myObject(10);

    EXPECT_EQ(myObject.getData(), 10);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}