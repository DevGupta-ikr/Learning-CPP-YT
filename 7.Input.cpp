#include <iostream>

using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your name: " << endl;
    getline(cin, name);

    cout << "You are " << name << endl;


    cout << "Enter your age: " << endl;
    cin >> age;

    cout << "You are " << age << " years old " << endl;




    return 0;
}
