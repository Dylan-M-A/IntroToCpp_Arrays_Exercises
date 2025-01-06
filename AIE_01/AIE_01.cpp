
#include <iostream>

int main(int argc, char** argv)
{
	const int NUM_NUMBERS = 5;
	int numbers[NUM_NUMBERS] = { 10, 20, 30, 40, 50 };

	/* 
	TODO: Print each value of the array in order
	Expected:
		10, 20, 30, 40, 50,
	*/
	// Task1: Write your Code here
	// ------------------------------------------------------------------------
	for (int i = 0; i < NUM_NUMBERS; i++)
		std::cout << numbers[i] << std::endl;
	std::cout << std::endl;

	// ------------------------------------------------------------------------


	/*
	TODO: Print each value of the array in reverse order
	Expected:
		50, 40, 30, 20, 10,
	*/

	// Task 2: Write your Code here
	// ------------------------------------------------------------------------
	//make copy of num_numbers - 1 so that its equal to the number of indeces in your array
	/// during loop print at the index of indeces and subtract one or -- from indeces until it reaches 0 which will be your last loop
	for (int i = NUM_NUMBERS - 1; i > -1; i--)
		std::cout << numbers[i] << std::endl;

	// ------------------------------------------------------------------------

	return 0;
}
