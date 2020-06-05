// Copyright 2020 Epremyan Norik
#include <gtest/gtest.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <vector>
#include "include/area_calculator_app.h"

TEST(Epremyan_Norik_Application, CanCreateObject) {
// Arrange
// Act
// Assert
	ASSERT_NO_THROW(area_calculator_app test());
}
// tests function(cancreatefigure)
TEST(Epremyan_Norik_Application, CanCreateFigureCube) {
	// Arrange
	area_calculator_app test;
	char* arr3[] = { "Program_name", "cube", "2" };
	char** data3 = arr3;
	// Act
	// Assert
	EXPECT_TRUE(test.CanCreateFigure(3, data3));
}

TEST(Epremyan_Norik_Application, CanCreateFigureCone) {
	// Arrange
	area_calculator_app test;
	char* arr4[] = { "Program_name", "cone", "2", "2" };
	char** data4 = arr4;
	// Act
	// Assert
	EXPECT_TRUE(test.CanCreateFigure(4, data4));
}

TEST(Epremyan_Norik_Application, CanCreateFigureCylinder) {
	// Arrange
	area_calculator_app test;
	char* arr4[] = { "Program_name", "cylinder", "2", "2" };
	char** data4 = arr4;
	// Act
	// Assert
	EXPECT_TRUE(test.CanCreateFigure(4, data4));
}

TEST(Epremyan_Norik_Application, CantCreateFigureCube) {
	// Arrange
	area_calculator_app test;
	char* arr3[] = { "Program_name", "cube", "2" };
	char** data3 = arr3;
	// Act
	// Assert
	EXPECT_FALSE(test.CanCreateFigure(2, data3));
}

TEST(Epremyan_Norik_Application, CantCreateFigureCylinder) {
	// Arrange
	area_calculator_app test;
	char* arr4[] = { "Program_name", "cylinder", "2", "2" };
	char** data4 = arr4;
	// Act
	// Assert
	EXPECT_FALSE(test.CanCreateFigure(3, data4));
}

TEST(Epremyan_Norik_Application, CantCreateFigureCone) {
	// Arrange
	area_calculator_app test;
	char* arr4[] = { "Program_name", "cone", "2", "2" };
	char** data4 = arr4;
	// Act
	// Assert
	EXPECT_FALSE(test.CanCreateFigure(3, data4));
}
TEST(Epremyan_Norik_Application, CantCreateUnknownFigure) {
	// Arrange
	area_calculator_app test;
	char* arr4[] = { "Program_name", "sphere", "2", "2" };
	char** data4 = arr4;
	// Act
	// Assert
	EXPECT_FALSE(test.CanCreateFigure(4, data4));
}
