#include <iostream>

using namespace std;

int main()
{
    char grade = 'A';
    string phrase = "Giraffe Academy";

    int age = -50;
    float cg = 2.3;
    double gpa = 4.5;
    bool isMale = true;

    cout << age << endl;   // endl is for new line : removing it, prints next value in same line
    cout << grade << endl;
    cout << cg << endl;   // Prints same output as stored no extra zeros
    cout << gpa << endl;  // Prints same output as stored no extra zeros
    cout << isMale << endl;

    return 0;
}
