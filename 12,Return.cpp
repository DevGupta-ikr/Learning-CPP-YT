#include <iostream>

using namespace std;

double cube(double num)
{
    double result = num * num * num;
    return result;

    cout << "This is not printed";
}

int main()
{
    double answer = cube(5.5);
    cout << answer << endl;
    cout << cube(7.0) << endl;

    return 0;
}
