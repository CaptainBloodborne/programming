#include <iostream>
#include <cmath>

int IntPow(int b, int p)
{
    if (p == 0) return 1;

    if (p == 1) return b;

    int n(b);
    do 
    {
        n *= b;
        std::cout << b << "\t" << p << std::endl;
        --p;
    }
    
    while (p > 1);

    return n;
}

int main()
{
    // int n_reversed(0);
    // n_reversed += (23 / IntPow(10, 2 - 1));

    int n (0);

    std::cin >> n;

    // int m(020000000000);

    // std::cout << (n & m) << std::endl;

    std::cout << n + 50 << std::endl;
    // std::cout << IntPow(10, 4) << std::endl;

    return 0;
}
