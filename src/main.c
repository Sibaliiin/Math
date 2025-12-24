#include	<stdio.h>

#include	"SIB_math.h"

float side = 25;

int main()
{
	printf("Hello world!\n");
	signature();


	printf("The area of a square with side %.2f is: %.2f.\n", side, area_square(side));
	printf("The volume of a square with side %.2f is: %.2f.\n", side, volume_square(side));
	return 0;
}
