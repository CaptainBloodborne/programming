#include <iostream>
#include <string>
#include <vector>

std::string Concatenate(const std::vector<std::string>& parts) {

    std::string result;

    for (const auto& part : parts) {

        result += part;

    }

    return result;

}

 
int main() {

    std::vector<std::string> parts = {"abra", "ca", "dabra"};

    std::cout << Concatenate(parts) << "\n";  // abracadabra

}

