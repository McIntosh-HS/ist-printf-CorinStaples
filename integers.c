#include <stdio.h>	// The stdio.h library contains input and output functions

int main()
{
	int a = -10;
	float f = 1.23;
	char c = 'z';

	// Format specifiers are placeholders for variable data
	printf("The value of a is: %i\n", a);	// %i is for integers
	printf("a displayed as a base 8 integer:: %o\n", a);	// %f is for floating point data
	printf("The value of a as a base 16 integer is: %x\n", a);   // %c is for single characters
	printf("The value of a as a base 10 integer is: %u\n", a);	// %f is for floating point data
	printf("The value of a as the ammount im suffering is: %i\n", a);	// %f is for floating point data
						//
	printf("a = %i, f = %f, c = %c\n", a, f, c);

	return 0;
}
