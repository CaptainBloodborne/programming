#include <iostream>
#include <cmath>

int main() 
{
    using namespace std;
    int n;

    cin >> n;

    int m(-1);
    int p (1);
    float result(0);

    while (n > 0) {
        result += (pow(m, p +1) / p);
        ++p;
        --n;
    }

    cout << result << endl;

}
