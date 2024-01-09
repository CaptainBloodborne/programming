#include <iostream>

int main() {
    using namespace std;

    int x = 42;

    int& ref = x;  // обычная ссылка

    // const int& cref = x;  // константная ссылка

    ++x;  // OK

    ++ref;  // OK

    // ++cref;  // ошибка компиляции: псевдоним cref предназначен только для чтения

 

    int* ptr = &x;  // обычный указатель

    // const int* cptr = &x;  // указатель на константу

    ++*ptr; // OK

    cout << x << endl;

    // ++*cptr;  // ошибка компиляции: разыменованный cptr — константа!

}
