#include <iostream>

using namespace std;

class T
{
protected:
    T(double t = 0.0) : temperature(t)
    {
        cout << "init T with: " << t << " " << this;
        cout << " temperature: " << temperature << endl;
        cout << "t: " << &t << endl;
    }
    ~T(){
        cout << "destroy T: " << this << endl;
    }
    T(const T& t) {
        cout << "init copy of T with: " << t.temperature << " " << this;
        temperature = t.temperature;
    }
    T& operator=(const T& t)
    {
        if (this != &t) temperature = t.temperature;

        return *this;
    }
    virtual void print() {cout << temperature;}
    friend ostream& operator<<(ostream&, const T&);
    double temperature;
};

ostream& operator<<(ostream& stream, const T& t)
{
    return stream << t.temperature;
}

class F : public T
{

protected:
    F(double t) : T(t)
    {
        cout << "init F with: " << t << " " << this;
        cout << " temperature: " << temperature << endl;
        cout << "t: " << &t << endl;
    }
    ~F(){
        cout << "destroy F: " << this << endl;
    }
public:
    void print() override {cout << 9 * temperature / 5 + 32;}
};

class K : virtual public T
{
protected:
    K(double t) : T(t)
    {
        cout << "init K with: " << t << " " << this;;
        cout << " temperature: " << temperature << endl;
        cout << "t: " << &t << endl;
    }
    ~K(){
        cout << "destroy K: " << this << endl;
    }
};

class R : virtual public T
{
protected:
    R(double t) : T(t)
    {
        cout << "init R with: " << t << " " << this;
        cout << " temperature: " << temperature << endl;
        cout << "t: " << &t << endl;
    }
    ~R(){
        cout << "destroy R: " << this << endl;
    }
};

class C : public F
{
public:
    C(double t) : F(t)
    {
        cout << "init C with: " << t << " " << this << endl;
        cout << "t: " << &t << endl;
    }
    ~C(){
        cout << "destroy C: " << this << endl;
    }

};

int main()
{
//    F tf(356);
//    cout << tf << endl;
//    T* p_T = &tf;
//    cout << 356 << "[F] is " << *p_T << endl;

    C t(100);

    F* p_F = &t;
    cout << 100 << "[C] is ";
    p_F->print();
    cout << "[F]" << endl;
//
//    K* p_K = &t;
//    cout << 100 << "[C] is " << *p_K << "[K]" << endl;
//
//    R* p_R = &t;
//    cout << 100 << "[C] is " << *p_R << "[R]" << endl;

    return 0;
}
