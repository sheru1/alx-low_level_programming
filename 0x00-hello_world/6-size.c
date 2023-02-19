#include <stdio.h>
/** 
 * main - A program that prints the sizes of various computer types
 *return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	lon long int d;
	float f;

printf("size of char: (%1u byte(s)\n", (unsigned long)sizeof(a));
printf("size of char: (%1u byte(s)\n", (unsigned long)sizeof(b));
printf("size of char: (%1u byte(s)\n", (unsigned long)sizeof(c));
printf("size of char: (%1u byte(s)\n", (unsigned long)sizeof(d));
printf("size of char: (%1u byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
