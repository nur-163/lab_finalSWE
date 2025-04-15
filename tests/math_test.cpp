#include <gtest/gtest.h>
#include "../src/math.h"

TEST(ShapeFactoryTest, CreateCircle) {
    auto shape = ShapeFactory::createShape("circle");
    ASSERT_NE(shape, nullptr);
}

TEST(ShapeFactoryTest, CreateSquare) {
    auto shape = ShapeFactory::createShape("square");
    ASSERT_NE(shape, nullptr);
}

TEST(ShapeFactoryTest, InvalidShapeReturnsNull) {
    auto shape = ShapeFactory::createShape("triangle");
    ASSERT_EQ(shape, nullptr);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
