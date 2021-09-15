#include <iostream>

using namespace std;

int main()
{
    int nums[11] = {4, 8, 15, 23, 42};

    cout << "Number: " << nums[0] << endl;

    nums[1] = 18;
    nums[10] = 56;

    cout << "Number: " << nums[1] << endl;
    cout << "Number: " << nums[10] << endl;


    return 0;
}
