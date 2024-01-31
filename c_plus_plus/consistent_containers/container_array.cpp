#include <iostream>
#include <array>

using namespace std;

int main()
{
    char str[11] = "I like C++";

    double x = 100.1, y;
int *p;
/* The next statement causes p (which is an
integer pointer) to point to a double. */
p = (int *)&x;
/* The next statement does not operate as
expected. */
y = *p;
printf("%f", y); /* won't output 100.1 */
return 0;
    
    return 0;
}