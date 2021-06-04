#include <stdio.h>

#define MY_PI 3.1415926535897932
#define MY_STRING "God Bless You!"

// if first constant is not assigned a value, it is assumed to be 0 i.e: 'SUNDAY' will be 0
// and the rest of the constants are assigned consecutive integer values from 0 onwards 
// i.e: 'MONDAY' will be 1, 'TUESDAY' will be 2, and so on...
enum {
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY,
}; // un-named enums

enum {
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
}; // un-named enums

enum BOOLEAN {
	TRUE = 1,
	FALSE = 0
}; // un-named enums

// ONE is starting with 0 value and FIVE is assigned value 5 explicitly
enum NUMBERS {
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE = 5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
}; // named enums

int main(void)
{
	// local constant declarations
	const double constantVariable = 0.654321;

	// code
	printf("\n----------------------------------------------");
	
	printf("\n# ["); printf(MY_STRING); printf("]\n");
	printf("# MY_STRING is : %s\n\n", MY_STRING);
	
	printf("# MY_PI macro value = %.10lf\n", MY_PI);
	printf("# area of circle of radius 2 units = %f\n\n", (MY_PI * 2.0f * 2.0f));
	
	printf("# local constant variable  = %lf\n\n", constantVariable);
	
	printf("# value of TRUE is  = %d\n", TRUE);
	printf("# value of FALSE is = %d\n\n", FALSE);
	
	printf("# day number is :: \n");
	printf(" >> SUNDAY    = %2d <<\n", SUNDAY);
	printf(" >> MONDAY    = %2d <<\n", MONDAY);
	printf(" >> TUESDAY   = %2d <<\n", TUESDAY);
	printf(" >> WEDNESDAY = %2d <<\n", WEDNESDAY);
	printf(" >> THURSDAY  = %2d <<\n", THURSDAY);
	printf(" >> FRIDAY    = %2d <<\n", FRIDAY);
	printf(" >> SATURDAY  = %2d <<\n\n", SATURDAY);

	printf("# enum number is ::\n");
	printf(" >> ONE       = %2d <<\n", ONE);
	printf(" >> TWO       = %2d <<\n", TWO);
	printf(" >> THREE     = %2d <<\n", THREE);
	printf(" >> FOUR      = %2d <<\n", FOUR);
	printf(" >> FIVE      = %2d <<\n", FIVE);
	printf(" >> SIX       = %2d <<\n", SIX);
	printf(" >> SEVEN     = %2d <<\n", SEVEN);
	printf(" >> EIGHT     = %2d <<\n", EIGHT);
	printf(" >> NINE      = %2d <<\n", NINE);
	printf(" >> TEN       = %2d <<\n\n", TEN);

	printf("# month number is ::\n");
	printf(" >> JANUARY   = %2d <<\n", JANUARY);
	printf(" >> FEBRUARY  = %2d <<\n", FEBRUARY);
	printf(" >> MARCH     = %2d <<\n", MARCH);
	printf(" >> APRIL     = %2d <<\n", APRIL);
	printf(" >> MAY       = %2d <<\n", MAY);
	printf(" >> JUNE      = %2d <<\n", JUNE);
	printf(" >> JULY      = %2d <<\n", JULY);
	printf(" >> AUGUST    = %2d <<\n", AUGUST);
	printf(" >> SEPTEMBER = %2d <<\n", SEPTEMBER);
	printf(" >> OCTOBER   = %2d <<\n", OCTOBER);
	printf(" >> NOVEMBER  = %2d <<\n", NOVEMBER);
	printf(" >> DECEMBER  = %2d <<\n", DECEMBER);
	
	printf("----------------------------------------------\n");
	
	return(0);
}
