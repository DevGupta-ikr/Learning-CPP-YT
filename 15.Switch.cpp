#include <iostream>

using namespace std;

string day(int Day_num)
{
    string name;

    switch(Day_num)
    {
    case 1:
        name = "Monday";
        break;
    case 2:
        name = "Tuesday";
        break;
    case 3:
        name = "Wednesday";
        break;
    case 4:
        name = "Thursday";
        break;
    case 5:
        name = "Friday";
        break;
    case 6:
        name = "Saturday";
        break;
    case 7:
        name = "Sunday";
        break;
    default:
        cout << "Invalid Day number " << endl;
    }

    return name;
}

int main()
{

    cout << day(3);

    return 0;
}
