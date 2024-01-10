#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;



struct Date {

    int year = 1970;
    int month = 1;
    int day = 1;

};

bool operator <(const Date& lhs, const Date& rhs)
{
    if (lhs.year != rhs.year) return lhs.year < rhs.year;

    if (lhs.month != rhs.year) return lhs.month < rhs.month;

    return lhs.day < rhs.day;

    // or
    // return tie(lhs.year, lhs.month, lhs.day) < tie(rhs.year, rhs.month, rhs.day);
}

bool CompareWithoutYear(const Date& lhs, const Date& rhs)
{
    return tie(lhs.month, lhs.day) < tie(rhs.month, rhs.day);
}
 
int main() {

    vector<Date> dates = {

        {2020, 3, 15},

        {2019, 1, 21},

        {2021, 1, 30}

    };

    // напечатаем содержимое:

    sort(dates.begin(), dates.end(), CompareWithoutYear);

    for (const auto& [year, month, day] : dates) {

        cout << year << "." << month << "." << day << endl;

    }


}