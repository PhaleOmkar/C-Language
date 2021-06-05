#include <stdio.h>

int main(void)
{
	// local variable declarations
	int firstNumber;
	int secondNumber;
	int result;

	// code
	printf("\n-----------------------------------\n");
	printf("********** Enter Numbers **********\n");
	printf("First Number  =? "); scanf("%d", &firstNumber);
	
	printf("Second Number =? "); scanf("%d", &secondNumber);

	// the following are the 5 arithmetic operators : '+', '-', '*', '/' and '%'
	// also, the resultants of the arithmetic operations in all the below five cases have been assigned to the variable 'result'
	// using the assignment operator '='
	
	printf("\n************** Result **************\n");
	result = firstNumber + secondNumber;
	printf("Addition         :: [%d] + [%d] = [%d]\n", firstNumber, secondNumber, result);

	result = firstNumber - secondNumber;
	printf("Subtraction      :: [%d] - [%d] = [%d]\n", firstNumber, secondNumber, result);

	result = firstNumber * secondNumber;
	printf("Multiplication   :: [%d] * [%d] = [%d]\n", firstNumber, secondNumber, result);

	if(secondNumber != 0) 
	{
		result = firstNumber / secondNumber;
		printf("Division         :: [%d] / [%d] = [%d]\n", firstNumber, secondNumber, result);
	}
	else
	{
		printf("Division         :: [%d] / [%d] = [undefined]\n", firstNumber, secondNumber);
	}
	
	if(secondNumber != 0) 
	{
		result = firstNumber % secondNumber;
		printf("Modulus Division :: [%d] %% [%d] = [%d]\n", firstNumber, secondNumber, result);
	}
	else
	{
		printf("Modulus Division :: [%d] %% [%d] = [undefined]\n", firstNumber, secondNumber);
	}

	printf("-----------------------------------\n");

	return(0);
}
