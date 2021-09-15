#include <iostream>

using namespace std;

void sayHello();  // Declare before to use later
void sayHi(string name, int age)
{
    cout << "Hello " << name << ". You are " << age << endl;
}

int main()
{
    sayHello();
    cout << "Top" << endl;
    sayHi("Mike", 45);
    sayHi("Tye", 25);
    sayHi("Jk", 78);
    cout << "\nDown" << endl;

    return 0;
}

void sayHello()
{
    cout << "Hello !!! " << endl;
}
