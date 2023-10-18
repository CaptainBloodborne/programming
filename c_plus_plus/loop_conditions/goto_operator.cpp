#include <iostream>

int main() {
    again: // метка - произвольное имя с :

    std::cout << "How old are you?\n";
    int age;
    std::cin >> age;

    if (age < 0 || age >= 128) {
        std::cout << "Wrong age...\n";
        goto again; // бузсловный прыжок в место, помеченное меткой
    }

    std::cout << "Your age is " << age << ".\n";
}
