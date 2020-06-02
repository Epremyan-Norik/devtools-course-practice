// Copyright 2020 Epremyan Norik
#include <string>
#include <gtest/gtest.h>
#include "calculator.h"
class testcube {
 public:
    std::string GetFigureType() {
        return "cube";
    }
    double GetEdge() {
        return 1;
    }
};

// -----------------------------TESTS FOR Calculator
TEST(Epremyan_Norik_Calculator, CanCreateObject) {
// Arrange
    testcube templ;
// Act
// Assert
    ASSERT_NO_THROW(calculator<testcube> temp());
}
