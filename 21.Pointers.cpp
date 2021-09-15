#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";


    cout << "Age: " << &age << endl;  // memory address of age
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << pAge << endl;

    // Dereferencing pointers:
    cout << *pAge << endl;
    cout << *&age << endl;

    // Redo to reference
    cout << &*&age << endl;


    return 0;
}
