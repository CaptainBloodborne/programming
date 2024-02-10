#include <iostream>

using namespace std;

enum scaleStatus{C, F, K, R};

class TemperatureScale {

    scaleStatus scaleType;
    double temperature;

    inline void fromFtoC() {temperature = 5 * (temperature  - 32) / 9; }

    inline void fromKtoC() {temperature  = temperature  - 273.15; }

    inline void fromRtoC() {temperature  = 5 * temperature  / 4;}

    inline void fromCtoF() {temperature  =  9 * temperature  / 5 + 32;}

    inline void fromCtoK() {temperature  = temperature  + 273.15;}

    inline void fromCtoR() {temperature  = 4 * temperature  / 5;}
public:
    TemperatureScale(double t = 0.0, scaleStatus s = C): temperature(t), scaleType(s) {};
    TemperatureScale(const TemperatureScale& ts)
    {
        temperature = ts.temperature;
        scaleType = ts.scaleType;
    }

    TemperatureScale& operator=(const TemperatureScale& ts)
    {
        if (this != &ts)
        {
            temperature = ts.temperature;
            scaleType = ts.scaleType;
        }

        return *this;
    }

    void setScaleType(scaleStatus st) {scaleType = st;}
    void setTemperature(double t) {temperature = t;}

    void changeScaleStatus(scaleStatus);
    friend ostream& operator<<(ostream&, const TemperatureScale&);
};

ostream& operator<<(ostream& stream, const TemperatureScale& ts) {

    stream << "Temperature scale type is: ";

    switch (ts.scaleType) {
        case C:
            stream << "Celsius. ";
            break;
        case F:
            stream << "Fahrenheit. ";
            break;
        case K:
            stream << "Kelvin. ";
            break;
        case R:
            stream << "Reaumur. ";
            break;
    }

    stream << "Value is: " << ts.temperature;

    return stream;
}

void TemperatureScale::changeScaleStatus(scaleStatus t) {
    switch (t) {
        case C:

            switch (scaleType) {
                case C:
                    cout << temperature << "[C] is ";
                    break;
                case F:
                    cout << temperature << "[F] is ";
                    fromFtoC();
                    break;
                case K:
                    cout << temperature << "[K] is ";
                    fromKtoC();
                    break;
                case R:
                    cout << temperature << "[R] is ";
                    fromRtoC();
                    break;
            }
            cout << temperature << "[C]";
            break;
        case F:

            switch (scaleType) {
                case C:
                    cout << temperature << "[C] is ";
                    fromCtoF();
                    break;
                case F:
                    cout << temperature << "[F] is ";
                    break;
                case K:
                    cout << temperature << "[K] is ";
                    fromKtoC();
                    fromCtoF();
                    break;
                case R:
                    cout << temperature << "[R] is ";
                    fromRtoC();
                    fromCtoF();
                    break;
            }
            cout << temperature << "[F]";
            break;
        case K:

            switch (scaleType) {
                case C:
                    cout << temperature << "[C] is ";
                    fromCtoK();
                    break;
                case F:
                    cout << temperature << "[F] is ";
                    fromFtoC();
                    fromCtoK();
                    break;
                case K:
                    cout << temperature << "[K] is ";
                    break;
                case R:
                    cout << temperature << "[R] is ";
                    fromRtoC();
                    fromCtoK();
                    break;
            }
            cout << temperature << "[K]";
            break;
        case R:

            switch (scaleType) {
                case C:
                    cout << temperature << "[C] is ";
                    fromCtoR();
                    break;
                case F:
                    cout << temperature << "[F] is ";
                    fromFtoC();
                    fromCtoR();
                    break;
                case K:
                    cout << temperature << "[K] is ";
                    fromKtoC();
                    fromCtoR();
                    break;
                case R:
                    cout << temperature << "[R] is ";
                    break;
            }
            cout << temperature << "[R]";
            break;
    }
    cout << endl;

    scaleType = t;
}

int main() {
    TemperatureScale
            t1(32, F), t2(100, C),
            t3(0, K), t4(100, C),
            t5(0, R), t6(100, C),
            t7(50, F), t8(134, K),
            t9;

    t1.changeScaleStatus(C);

    t2.changeScaleStatus(F);

    t3.changeScaleStatus(C);

    t4.changeScaleStatus(K);

    t5.changeScaleStatus(C);

    t6.changeScaleStatus(R);

    t7.changeScaleStatus(K);

    t8.changeScaleStatus(R);

    t9.setTemperature(356);
    t9.setScaleType(K);
    cout << t9 << endl;
    t9.changeScaleStatus(C);

    return 0;
}
