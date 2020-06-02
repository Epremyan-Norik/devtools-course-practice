// Copyright 2020 Epremyan Norik
#include <gtest/gtest.h>
#include <string>
#include "include/cylinder.h"
// -----------------------------TESTS FOR Cylinder
TEST(Epremyan_Norik_Cylinder, CanCreateObject) {
    // Arrange
    // Act
    // Assert
    ASSERT_NO_THROW(Cylinder temp());
}
TEST(Epremyan_Norik_Cylinder, CanCreateObjectWithArgument) {
    // Arrange
    double _height;
    double _radius;
    // Act
    _height = 5;
    _radius = 5;
    // Assert
    ASSERT_NO_THROW(Cylinder temp(_height, _radius));
}
TEST(Epremyan_Norik_Cylinder, CanGetFigureType) {
    // Arrange
    Cylinder temp;
    std::string type;
    // Act
    type = temp.GetFigureType();
    // Assert
    EXPECT_EQ(type, "cylinder");
}
TEST(Epremyan_Norik_Cylinder, CanGetRadius) {
    // Arrange
    Cylinder temp;
    double radius;
    // Act
    radius = temp.GetRadius();
    // Assert
    EXPECT_DOUBLE_EQ(radius, 1);
}
TEST(Epremyan_Norik_Cylinder, CanGetHeight) {
    // Arrange
    Cylinder temp;
    double radius;
    // Act
    radius = temp.GetHeight();
    // Assert
    EXPECT_DOUBLE_EQ(radius, 1);
}
TEST(Epremyan_Norik_Cylinder, CanSetHeight) {
    // Arrange
    Cylinder temp;
    double _height;
    // Act
    _height = 5;
    // Assert
    EXPECT_TRUE(temp.SetHeight(_height));
}
TEST(Epremyan_Norik_Cylinder, CanSetRadius) {
    // Arrange
    Cylinder temp;
    double _radius;
    // Act
    _radius = 5;
    // Assert
    EXPECT_TRUE(temp.SetRadius(_radius));
}
TEST(Epremyan_Norik_Cylinder, CantSetRadiusNegative) {
    // Arrange
    Cylinder temp;
    double _radius;
    // Act
    _radius = -5;
    // Assert
    ASSERT_ANY_THROW(temp.SetRadius(_radius));
}
TEST(Epremyan_Norik_Cylinder, CantSetHeightNegative) {
    // Arrange
    Cylinder temp;
    double _height;
    // Act
    _height = -6;
    // Assert
    ASSERT_ANY_THROW(temp.SetRadius(_height));
}
