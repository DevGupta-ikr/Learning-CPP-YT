#include <iostream>

using namespace std;

int main()
{
    int index = 1;
    while(index <= 5)
    {
        cout << index << endl;
        index++;

    }

    do     // Runs once since it is an exit controlled loop
    {
        cout << index << endl;
        index++;

    }while(index <= 5);

    return 0;
}
