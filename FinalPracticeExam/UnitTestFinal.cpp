//
//  UnitTestFinal.cpp
//  FinalPracticeExam
//
//  Created by Michael Wheeler on 15/05/2024.
//

#include "UnitTestFinal.hpp"
using namespace std;

public:
// Testing allPositive
TEST_METHOD(TestMethod_AllPositive) {
    // Arrange
    const int SIZE = 5;
    double arr[SIZE] = { 1.3, 2.2, -3.5, 0.0, 10.2 };
    bool res;
    // Act
    res = allPositive(arr, SIZE);
    
    // Assert
    Assert::IsFalse(res);
    // test
    
}
