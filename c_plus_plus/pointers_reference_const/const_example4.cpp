int main() {

    const int cx = 42;

 

    int& ref = cx;  // ошибка компиляции: константность нельзя убрать

    const int& cref = cx;  // OK

 

    int* ptr = &cx;  // тоже ошибка компиляции

    const int* cptr = &cx;  // OK

}
