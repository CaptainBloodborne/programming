/* Programming in C Style */

#include <cstdio>

int main()
{

	int n; /* memory class - auto */

	printf("Programming in C style\n");
	do
	{
		printf("Number [-128, 127]? ");
		scanf("%d", &n);
	}
	while (!(n >= -128 && n <= 127));
	printf("%d\n", n);

	return 0;
}
