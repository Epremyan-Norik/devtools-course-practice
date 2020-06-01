// Copyright 2020 Epremyan Norik
#pragma once
#include "include/cube.h"
#include <gtest/gtest.h>


//-----------------------------TESTS FOR CUBE
TEST(Epremyan_Norik_Cube, CanCreateAObject) {
    // Arrange

    // Act

    // Assert
    ASSERT_NO_THROW(cube temp);
}
TEST(Epremyan_Norik_Cube, CanGetFigureType) {
	// Arrange
	cube temp;
	std::string type;

	// Act
	type=temp.GetFigureType();

	// Assert
	EXPECT_TRUE(type=="cube");
}
TEST(Epremyan_Norik_Cube, CanGetEdge) {
	// Arrange
	cube temp;
	double edge;

	// Act
	edge = temp.GetEdge();

	// Assert
	EXPECT_DOUBLE_EQ(edge, 0);
}
TEST(Epremyan_Norik_Cube, CanCreateWithEdge) {
	// Arrange

	// Act

	// Assert
	ASSERT_NO_THROW(cube temp(2));
}
TEST(Epremyan_Norik_Cube, CantCreateWithNegativeValue) {
	// Arrange

	// Act

	// Assert
	ASSERT_ANY_THROW(cube tmp(-2));
}
TEST(Epremyan_Norik_Cube, CanSetEdge) {
	// Arrange
	cube temp;

	// Act
	bool result = temp.setEdge(2);

	// Assert
	EXPECT_FALSE(result);
}
TEST(Epremyan_Norik_Cube, CantSetNegativeValue) {
	// Arrange
	cube temp;

	// Act

	// Assert
	ASSERT_ANY_THROW(temp.setEdge(-2));
}

