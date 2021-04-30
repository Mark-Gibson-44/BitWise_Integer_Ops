namespace ArithmeticLogicOps {

	//Arithmetic
	int add(int operandA, int operandB);
	int neg(int operandA, int operandB);
	int mul(int operandA, int operandB);
	int inc(int operandA);
	int dec(int operandA);
	int parity(int operandA, int operandB);

	//Logic
	int bitwise_or(int operandA, int operandB);
	int bitwise_and(int operandA, int operandB);
	int bitwise_xor(int operandA, int operandB);

	//shift
	int left_shift(int operandA, int shiftAmount);
	int right_shift(int operandA, int shiftAmount);
	int rotation(int operandA, int shiftAmount);
}