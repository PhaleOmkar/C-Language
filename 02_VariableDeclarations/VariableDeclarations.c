#include <stdio.h>

int main(void)
{
    // local variable declaration
	// assigning values to variables
    char charVariable 		= 'O';
	int integerVariable 	= 17;
    float floatVariable 	= 3.14f;
    double doubleVariable 	= 9.120596;
    
  	// code
	printf("----------------------------------\n");
	
	printf("printing variable values >> \n");
   
    printf("char variable value\t = %c\n", charVariable);
	printf("integer variable value\t = %d\n", integerVariable);
    printf("float variable value\t = %0.2f\n", floatVariable);
    printf("double variable value\t = %lf\n", doubleVariable);
    
    // updating variable values
	charVariable    = 'P';
	integerVariable = 95;
    floatVariable   = 5.96f;
    doubleVariable  = 68.524589;
    
	printf("\n==================================\n");
	printf("\nprinting updated variable values >> \n");
    
	printf("char variable value\t = %c\n", charVariable);
	printf("integer variable value\t = %d\n", integerVariable);
    printf("float variable value\t = %0.2f\n", floatVariable);
    printf("double variable value\t = %lf\n", doubleVariable);
     
    printf("----------------------------------\n");
	
    return(0);
}
