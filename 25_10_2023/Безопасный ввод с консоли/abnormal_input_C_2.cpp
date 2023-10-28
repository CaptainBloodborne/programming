/* Programming in C Style */

#include <cstdio>

int main()
{

	int n;        /* memory class - auto */
	char answer;  /* memory class - auto */

	printf("Programming in C style\n");
	do
	{
		repeat:
		printf("Number [-128, 127]? ");
		scanf("%d", &n);
		printf("Repeat input (y or Y)? ");
		scanf("%c", &answer);
		if ((answer == 'y') || (answer == 'Y')) goto repeat;
	}
	while (!(n >= -128 && n <= 127));
	printf("%d\n", n);

	return 0;
}
