#include <iostream>

using namespace std;

int main()
{
    bool isMale = true;
    bool isTall = false;

    if(isMale && isTall)
    {
        cout << "You are a Tall Male" << endl;
    }
    else if(isMale && !(isTall))
    {
        cout << "You are a short Male" << endl;
    }
    else
    {
        cout << "You are not a Tall Male" << endl;
    }

    return 0;
}
