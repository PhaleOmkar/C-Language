#include <stdio.h>

int main(void)
{
  // code
  printf("\n**************************************************************************************\n");

  printf("Hello People!\n\n");

	printf("======================= Character =======================\n");
	char charVariable = 'O';
	printf("Character charVariable = %c\n\n", charVariable);
	
	printf("======================= Character Array / String =======================\n");
	char charArray[] = "Life is too short to worry, Stay Safe and Be Happy!";
	printf("String charArray = %s\n\n", charArray);

	printf("======================= Long =======================\n");
	long longVariable = 20040596L;
	printf("Long Integer 'longVariable' = %ld\n\n", longVariable);

	printf("======================= Unsigned Integer =======================\n");
	unsigned int unsignedIntVariable = 9;
	printf("Unsigned Integer 'unsignedIntVariable' = %u\n\n", unsignedIntVariable);
	
	printf("======================= Integer =======================\n");
	int integerVariable = 255;
	
	printf("Decimal Value Of 'integerVariable' = %d\n", integerVariable);
	printf("Octal Value Of 'integerVariable' = %o\n", integerVariable);
	printf("Hexadecimal Value Of 'integerVariable' ::\n");
	printf(" >> In Lower Case = %x\n", integerVariable);
	printf(" >> In Upper Case = %X\n\n", integerVariable);

	printf("======================= Floating Point =======================\n");
	float floatVariable = 2004.0596f;
	printf("Number With Just %%f 'floatVariable' = %f\n", floatVariable);
	printf("Number With %%4.2f 'floatVariable' = %4.2f\n", floatVariable);
	printf("Number With %%6.5f 'floatVariable' = %6.5f\n\n", floatVariable);

	printf("======================= Double Precision Floating Point =======================\n");
	double doubleVariable = 3.14159265358979323846;
	printf("Number Without Exponential doubleVariable = %g\n", doubleVariable);
	printf("Number With Exponential ::\n");
	printf(" >> Lower Case = %e\n", doubleVariable);
	printf(" >> Upper Case = %E\n\n", doubleVariable);
	
	printf("======================= Double =======================\n");
	printf("Hexadecimal Value Of 'doubleVariable' ::\n");
	printf(" >> In Lower Case = %a\n", doubleVariable);
	printf(" >> In Upper Case = %A\n", doubleVariable);

	printf("**************************************************************************************\n");
	
	return(0);
}
