#include <iostream>

#include <vector>

 

int main() {

    std::vector<std::string> words = {"one", "two", "three"};

    std::string& ref = words[0];  // псевдоним для начального элемента вектора

    words.clear();


    // обращаться к ссылке ref уже нельзя!

    std::cout << ref << "\n";  // неопределённое поведение!

}
