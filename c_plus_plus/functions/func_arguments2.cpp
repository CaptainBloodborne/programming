#include <iostream>

using namespace std;

int main() {

    int a(0);
    int b(0);

    // какая-то инициализация a и b

 

    {   // этот блок просто ограничивает время жизни

        // находящихся внутри переменных

        int x = a;

        int y = b;

        // работаем с аргументами x и y

    }

}