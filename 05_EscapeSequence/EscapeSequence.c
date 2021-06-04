#include <stdio.h>

int main(void)
{
	// code
	printf("----------------------------------------------------------------------------\n");
	
	printf("[going on to next line...using \\n escape sequence]\n\n");
	printf("[demonstrating \t horizontal \t tab \t using \t \\t escape sequence]\n\n");
	printf("[demonstrating \v vertical \v tab \v using \v \\v escape sequence]\n\n");
	printf("[\"this is a double quoted output\" done using \\\" \\\" escape sequence]\n\n");
	printf("[\'this is a single quoted output\' done using \\\' \\\' escape sequence]\n\n");
	printf("[backspace turned to backspace\b using escape sequence \\b]\n\n");
	
	printf("[\r demonstrating carriage return using \\r escape sequence]\n");
	printf("[demonstrating \r carriage return using \\r escape sequence]\n");
	printf("[demonstrating carriage \r return using \\r escape sequence]\n\n");
	
	// 0x41 is the hexadecimal code for letter 'a'. 
	// 'xhh' is the place-holder for 'x' followed by 2 digits (hh), altogether forming a hexadecimal number.
	printf("[demonstrating \x41 using \\xhh escape sequence]\n\n");
	
	// 102 is the octal code for letter 'B'. 
	// 'ooo' is the place-holder for 3 digits forming an octal number.	
	printf("[demonstrating \102 using \\ooo escape sequence]\n");
	
	printf("----------------------------------------------------------------------------\n");
	
	return(0);
}
