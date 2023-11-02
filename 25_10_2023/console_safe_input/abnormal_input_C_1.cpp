/* Programming in C Style */

#include <cstdio>

int main()
{

	int n; /* memory class - auto */
	char c;
	int counter = 0;

	printf("Programming in C style\n");
	do
	{
		if (counter == 5)
		{
			c = getchar();
			printf("Char is: %c\n", c);
		}
		printf("Number [-128, 127]? ");
		scanf("%d", &n);
		++counter;
 	}
	while (!(n >= -128 && n <= 127));
	printf("%d\n", n);

	return 0;
}
