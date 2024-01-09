#include <iostream>
#include <string>

int main()
{
    using namespace std;
    int x(42);
    int& ref(x); // ссылка на x

    ++x;

    cout << ref << endl;

    string s1 = "Elementary, my dear Watson!";

    string& s2 = s1;  // тут ссылка!

    s1.clear();

    std::cout << s2.size() << endl;  // напечатает 0

    // int my_variable = 42;

    // int& ref;  // ошибка!

    // ...

    // ref = my_variable;

    int x1 = 42, y1 = 13;

    int& ref1 = x1;  // OK

    ref1 = y1;  // ссылка останется привязанной к x, значение x поменяется

    cout << x1 << endl;

    return 0;
}
