#include <iostream>

int main() {

    int sum = 0;

    int user_num(0);

    while (user_num != 0) {
        sum += user_num;

        std::cin >> user_num;
    }

    std::cout << "Sum is: " << sum << "\n";

}

/*
int main() {

    int sum = 0;

    while (true) {

        int x;

        std::cin >> x;

        if (x == 0) {

            break;

        }

        sum += x;

    }

    std::cout << sum << "\n";

}
*/
