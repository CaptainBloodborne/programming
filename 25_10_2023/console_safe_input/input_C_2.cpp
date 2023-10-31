/* Programming in C Style */

#include <cstdio>

int main()
{
	char c;
	int n = 0;  /* default value */

	printf("Integer number? ");
	scanf("%d", &n);
	printf("Number: %d\n", n);
	repeat:
	c = getchar();
	n = (int)c;
	printf("ASCII-code: %d\n", n);
	if (n != 10) goto repeat;  /* not LF */

	return 0;
}
