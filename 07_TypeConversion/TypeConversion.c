#include <stdio.h>

int main(void)
{
	// local variable declaration
	char firstCharacter, secondCharacter;
	
	int firstInteger, secondInteger;
	int implicitInteger, integerResultVariable;
	int explicitInteger;
	
	float implicitFloat, floatResultVariable;
	float explicitFloat;

	// code
	printf("\n==========================================================================\n");

	// interconversion and implicit type-casting between 'char' and 'int' types
	printf("# *********************************************************\n");
	printf("# ******* interconversion and implicit type-casting *******\n");
	printf("# *********************************************************\n");firstInteger = 112;
	printf("# firstInteger    = %d\n", firstInteger);
	
	firstCharacter = firstInteger;
	printf("# firstCharacter  = %c (after firstCharacter = firstInteger)\n\n", firstCharacter);
	
	secondCharacter = 'O';
	secondInteger = secondCharacter;
	printf("# secondCharacter = %c\n", secondCharacter);
	printf("# secondInteger   = %d (after secondInteger = secondCharacter)\n\n", secondInteger);

	// implicit conversion of 'int' to 'float'
	printf("# *********************************************************\n");
	printf("# ******** implicit conversion of 'int' to 'float' ********\n");
	printf("# *********************************************************\n");
	implicitInteger = 7;
	implicitFloat = 4.5f;
	
	integerResultVariable = implicitInteger + implicitFloat;
	printf("# [integer implicitinteger = %d] + [floating-point number = %f] \n\t= [added gives integer sum = %d]\n\n", implicitInteger, implicitFloat, integerResultVariable);

	floatResultVariable = implicitInteger + implicitFloat;
	printf("# [integer implicitinteger = %d] + [floating-point number = %f] \n\t= [added gives floating-point sum = %f]\n\n", implicitInteger, implicitFloat, floatResultVariable);
	
	// explicit type-casting using cast operator
	printf("# *********************************************************\n");
	printf("# ******* explicit type-casting using cast operator *******\n");
	printf("# *********************************************************\n");
	explicitFloat = 95.081996f;
	explicitInteger = (int)explicitFloat;
	
	printf("# resultant integer after explicit type casting of %f = %d\n", explicitFloat, explicitInteger);
	printf("# floating point number which will be type casted explicitly = %f\n", explicitFloat);
	
	printf("==========================================================================\n");

	return(0);
}
