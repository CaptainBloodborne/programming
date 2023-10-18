#include <iostream>
#include <cstdint>

int main() {
    int64_t a, b;
    char operation;

    std::cin >> a >> operation >> b;

    int64_t result;

    switch (operation) {
        case '+':
            result = a + b;
            break;// если не написать этот break, программа просто пойдёт дальше в код следующего блока case
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:
            result = 0; // здесь обрабатывается случай, когда ни один case не сработал.
    }

    std::cout << result << "\n";
}
