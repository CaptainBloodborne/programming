#include <iostream>

using namespace std;

class Time {

private:

    int hours;
    int minutes;
    int seconds;

    void Normalize() {

        minutes += seconds / 60;
        seconds %= 60;

        if (seconds < 0) {
            minutes -= 1;
            seconds += 60;
        }

 

        hours += minutes / 60;
        minutes %= 60;

        if (minutes < 0) {
            hours -= 1;
            minutes += 60;
        }


        hours %= 24;

        if (hours < 0) {
            hours += 24;
        }

    }

public:

    Time() {}; // or Time() = default
    Time(int h, int m, int s);  // объявляем конструктор
    Time(int s) : Time(0, 0, s) {

    };

    // Объявляем три функции для чтения полей:

    int GetHours() const;
    int GetMinutes() const;
    int GetSeconds() const;



};

Time::Time(int h, int m, int s): hours(h), minutes(m), seconds(s) {

    Normalize();

    // if (s < 0 || s > 59 || m < 0 || m > 59 || h < 0 || h > 23) {
    //     throw out_of_range("Wrong time!");
    // }

    // m += s / 60;
    // s %= 60;

    // // Если s было отрицательным, то остаток тоже будет отрицательным

    // if (s < 0) {

    //     // Уменьшим в этом случае минуты и сделаем секунды положительными

    //     m -= 1;
    //     s += 60;

    // }

    // h += m / 60;
    // m %= 60;

    // if (m < 0) {

    //     h -= 1;
    //     m += 60;
    // }

 
    // h %= 24;

    // if (h < 0) {

    //     h += 24;
    // }

    // hours = h;
    // minutes = m;
    // seconds = s;

}

int Time::GetHours() const {
    return hours;
}

 
int Time::GetMinutes() const {
    return minutes;
}

 
int Time::GetSeconds() const {
    return seconds;
}

ostream& operator << (std::ostream& out, Time* const t) {

    out << t->GetHours() << ":" << t->GetMinutes() << ":" << t->GetSeconds();

    return out;

    }

int main()
{
    Time t1(10, 18, -5);  // 10:17:55

    Time t2(25, 10, 42);  // 01:10:42

    Time t3(23, 59, 61);  // 00:00:01

    cout << t2 << endl;

    return 0;
}