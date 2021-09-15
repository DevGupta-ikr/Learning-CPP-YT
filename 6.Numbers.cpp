
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << 5 + 7;
    cout << 7 * 3 << endl;

    double dnum = 5.5;
    dnum ++;
    int a = 5;

    cout << dnum + a << endl;  // Double is overpowering

    // Math functions  : cmath added

    cout << pow(3,5) << endl;
    cout << sqrt(9) << endl;  // int output
    cout << floor(4.8) << endl;
    cout << ceil(4.8) << endl;
    cout << fmax(4.8, 67) << endl;
    cout << fmin(4.8, 67) << endl;

    return 0;
}
