#include <iostream>

using namespace std;

int main()
{
    int secret = 7;
    int guess;
    int counter;
    bool out = false;

    while(secret!=guess && !out)
    {
        if(counter <= 4)
        {
            cout << "Enter a number: " << endl;
            cin >> guess;
            counter++;
        }
        else
        {
            out = true;
        }

    }
    if(out)
    {
        cout << "You Lose! " << endl;
    }
    else
    {
        cout << "You Win! " << endl;
    }

    return 0;
}
