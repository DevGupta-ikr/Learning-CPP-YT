
#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;

        Student(string aName, string aMajor, double aGpa)   // Constructor
        {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool Hons()
        {
            if(gpa >= 3.5)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{

    Student Stud1("J K", "Business", 2.4);
    Student Stud2("Tolkein", "Art", 3.6);


    cout << Stud2.Hons() << endl;  // 1 if true else 0

    return 0;
}
