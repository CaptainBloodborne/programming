// #include <iostream>

// int main() {
//     int n = 1;

//     do // цикл с постусловием, первая итерация всегда выполняется безусловно
//     { 
//         std::cout << n << "\t" << n * n << "\n" << "Введи число: \n";
//         std::cin >> n; 
//         ++n;
//     } while (n <= 10);
// }

#include <cstdio>

int main()
{
    int n = 1;
    int m;
    // char ch1;

    scanf("%d%d", &n, &m);

    // do 
    // {
    //     printf("%d\t%d * %d\nВведи число: ", n, n, n);
    //     scanf("%d", &n);
    //     ch1 = getchar();
    //     printf("%d\n", ch1);

    // }
    // while (n <= 10);

    printf("Finale: %d\t%d\n", n, m);
}
