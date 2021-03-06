#include "Operations.h"
#include <iostream>


int ArithmeticLogicOps::add(int operandA, int operandB)
{
	int accum = (operandA ^ operandB) & 1;
	int carry = (operandA & operandB) & 1;

	carry = carry << 1;
	for (int mask = 2; mask <= sizeof(int) * 8; mask = (mask << 1))
	{
		accum |= ((operandA ^ operandB) ^ carry) & mask;


		carry = (((operandA & operandB) | (operandA & carry) | (operandB & carry))) << 1;

	}

	return accum;
}

int ArithmeticLogicOps::neg(int operandA, int operandB)
{
	operandB = ~operandB;
	
	auto intermediate = ArithmeticLogicOps::add(operandA, operandB);
	return ArithmeticLogicOps::add(intermediate, 1); 
}

int ArithmeticLogicOps::inc(int operandA)
{
	return ArithmeticLogicOps::add(operandA, 1);
}

int ArithmeticLogicOps::dec(int operandA)
{
	return ArithmeticLogicOps::neg(operandA, 1);
}

int ArithmeticLogicOps::bitwise_or(int operandA, int operandB)
{
	int ret = 0;

	for (int mask = 1; mask <= sizeof(int) * 8; mask = (mask << 1))
	{
		ret |= (operandA | operandB) & mask;

	}
	return ret;
}

int ArithmeticLogicOps::bitwise_and(int operandA, int operandB)
{
	int ret = 0;

	for (int mask = 1; mask <= sizeof(int) * 8; mask = (mask << 1))
	{
		ret |= (operandA & operandB) & mask;

	}
	return ret;
}

int ArithmeticLogicOps::bitwise_xor(int operandA, int operandB)
{
	int ret = 0;

	for (int mask = 1; mask <= sizeof(int) * 8; mask = (mask << 1))
	{
		ret |= (operandA ^ operandB) & mask;

	}
	return ret;
}

int ArithmeticLogicOps::left_shift(int operandA, int shiftAmount)
{
	int ret = 0;
	for (int i = 1; i < sizeof(int) * 4; i = i << 1)
	{
		ret |= ((operandA & i) * 2);
	}
	if (shiftAmount == 1)
		return ret;
	return ArithmeticLogicOps::left_shift(ret, shiftAmount - 1);
	
	
}

int ArithmeticLogicOps::right_shift(int operandA, int shiftAmount)
{
	int ret = 0;
	
	for (int mask = 1; mask <= sizeof(int) * 4; mask = mask << 1)
	{
		ret |= (operandA & mask) / 2;
	}
	if(shiftAmount == 1)
		return ret;
	return ArithmeticLogicOps::right_shift(ret, shiftAmount - 1);
}

int ArithmeticLogicOps::rotation(int operandA, int shiftAmount)
{
	int msb = operandA & (sizeof(int) * 8);
	int shifted = ArithmeticLogicOps::left_shift(operandA, 1);
	return 0;
}
