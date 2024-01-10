#include <algorithm>
#include <iostream>
#include <vector>

 using namespace std;

struct Date {

    int year, month, day;

};

 

int main() {

    vector<Date> dates = {

        {2020, 3, 15},

        {2019, 1, 21},

        {2021, 1, 30}

    };
    int a(0);

    std::sort(dates.begin(), dates.end(), [&a](const Date& lhs, const Date& rhs) {
        std::cout << a << endl;
        ++a;

        return std::tie(lhs.month, lhs.day) < std::tie(rhs.month, rhs.day);

    });

    for (const auto& [year, month, day] : dates) {

        cout << year << "." << month << "." << day << endl;

    }
    // - Квадратные скобки отвечают за контекст. В них мы можем передать переменные, которые объявлены вне лямбда-функции через запятую, и они будут доступны в самой лямбда-функции.
    // - Круглые скобки отвечают за аргументы функции.
    // - Фигурные скобки отвечают за тело лямбда-функции.

}
