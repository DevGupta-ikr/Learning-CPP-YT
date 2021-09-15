
#include <iostream>

using namespace std;

int main()
{
    int Grid[3][2] = {
                      {1,2},
                      {3,4},
                      {5,6}
    };

    cout << "Test 1: " << Grid[0][1] << endl;
    cout << "Test 2: " << Grid[2][0] << endl;

    // Nested For Loop

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << "Number at (" <<i<<","<<j<< ") : " << Grid[i][j] << endl;
        }
    }

    return 0;
}
