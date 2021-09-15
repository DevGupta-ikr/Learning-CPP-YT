#include <iostream>

using namespace std;

int power(int base, int pow)
{
    int result = 1;
    for(int i = 0; i < pow; i++)
    {
        result *= base;
    }
    return result;
}

int main()
{

    cout << power(4,2) << endl;

    return 0;
}
