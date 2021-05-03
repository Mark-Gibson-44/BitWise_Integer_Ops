#include <gtest/gtest.h>
#include "../Operations.h"

TEST(Addition, BasicAssertions) {
  // Expect two strings not to be equal.
  
  // Expect equality.
  EXPECT_EQ(ArithmeticLogicOps::add(4,5), 4 + 5);
}

TEST(Negation, BasicAssertions){

  EXPECT_EQ(ArithmeticLogicOps::neg(80,43), 80 - 43);
}

TEST(BITWISE_And, BasicAssertions){

  EXPECT_EQ(ArithmeticLogicOps::bitwise_and(32, 91), 32 & 91);
}

TEST(BITWISE_Or, BasicAssertions){     
                                        
  EXPECT_EQ(ArithmeticLogicOps::bitwise_or(32, 91), 32 | 91);
}

TEST(BITWISE_Xor, BasicAssertions){

  EXPECT_EQ(ArithmeticLogicOps::bitwise_xor(32, 91), 32 ^ 91);
}

TEST(Shift_left, BasicAssertions){

  EXPECT_EQ(ArithmeticLogicOps::left_shift(32, 1), (32 << 1));
}

TEST(Shift_right, BasicAssertions){

  EXPECT_EQ(ArithmeticLogicOps::right_shift(19, 1), (19 >> 1));
}


