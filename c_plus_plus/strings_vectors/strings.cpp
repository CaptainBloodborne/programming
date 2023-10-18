//
// Created by artem on 15.10.23.
//
#include <iostream>
#include <string>

int main() {
    std::string s = "Some string";

    // приписывание символов и строк
    s += ' '; // добавляем отдельный символ в конец, это аналог push_back
    s += "functions"; // добавляем строку в конец

    // выделение подстроки
    // подстрока "string" из 6 символов начиная с 5-й позиции
    std::cout << s << "\n";
    // подстрока "functions" с 12-й позиции и до конца
    std::string sub1 = s.substr(5, 6);
    std::cout << sub1 << "\n";
    // подстрока "functions" с 12-й позиции и до конца
    std::string sub2 =  s.substr(12);
    std::cout << sub2 << "\n";

    // поиск символа или подстроки
    size_t pos1 = s.find(' '); // позиция первого пробела, в данном случае 4
    size_t pos2 = s.find(' ', pos1 + 1); // позиция следующего пробела (11)
    size_t pos3 = s.find("str"); // вернётся 5
    size_t pos4 = s.find("#"); // вернётся std::string::npos

    std::cout << "positions: " << pos1 << " " << pos2 << " " << pos3 << " " << pos4 << " " << "\n\n";

    std::string s2 = "Some string functions";

    // вставка подстроки
    s2.insert(5, "std::");
    std::cout << s2 << "\n";

    // замена указанного диапазона на новую подстроку
    s2.replace(0, 4, "Special");
    std::cout << s2 << "\n";

    // удаление подстроки
    s2.erase(8, 5);
    std::cout << s2 << "\n\n";

    std::string phrase;
    std::getline(std::cin, phrase);

    if (phrase.starts_with("hello")) {
        std::cout << "Greeting\n";
    }

    if (phrase.ends_with("bye")) {
        std::cout << "Farewell\n";
    }

}
