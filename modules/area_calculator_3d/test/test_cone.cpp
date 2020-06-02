// Copyright 2020 Epremyan Norik
#include <gtest/gtest.h>
#include <string>
#include "include/cone.h"
// -----------------------------TESTS FOR CONE

TEST(Epremyan_Norik_Cone, CanCreateObject) {
    // Arrange
    // Act
    // Assert
    ASSERT_NO_THROW(cone temp);
}
TEST(Epremyan_Norik_Cone, CanCreateObjectWithArguments) {
    // Arrange
    double _height;
    double _radius;
    // Act
    _height = 5;
    _radius = 5;
    // Assert
    ASSERT_NO_THROW(cone temp(_height, _radius));
}
TEST(Epremyan_Norik_Cone, CanGetFigureType) {
    // Arrange
    cone temp;
    std::string type;
    // Act
    type = temp.GetFigureType();
    // Assert
    EXPECT_EQ(type, "cone");
}
TEST(Epremyan_Norik_Cone, CanGetRadius) {
    // Arrange
    cone temp;
    double radius;
    // Act
    radius = temp.GetRadius();
    // Assert
    EXPECT_DOUBLE_EQ(radius, 1);
}
TEST(Epremyan_Norik_Cone, CanGetHeight) {
    // Arrange
    cone temp;
    double radius;
    // Act
    radius = temp.GetHeight();
    // Assert
    EXPECT_DOUBLE_EQ(radius, 1);
}
TEST(Epremyan_Norik_Cone, CanSetHeight) {
    // Arrange
    cone temp;
    double _height;
    // Act
    _height = 5;
    // Assert
    EXPECT_FALSE(temp.SetHeight(_height));
}
TEST(Epremyan_Norik_Cone, CanSetRadius) {
    // Arrange
    cone temp;
    double _radius;
    // Act
    _radius = 5;
    // Assert
    EXPECT_FALSE(temp.SetRadius(_radius));
}
TEST(Epremyan_Norik_Cone, CantSetRadiusNegative) {
    // Arrange
    cone temp;
    double _radius;
    // Act
    _radius = -5;
    // Assert
    ASSERT_ANY_THROW(temp.SetRadius(_radius));
}
TEST(Epremyan_Norik_Cone, CantSetHeightNegative) {
    // Arrange
    cone temp;
    double _height;
    // Act
    _height = -6;
    // Assert
    ASSERT_ANY_THROW(temp.SetRadius(_height));
}
