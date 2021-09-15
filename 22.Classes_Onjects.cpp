#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string aName)   // Constructor
        {
            cout << "Creating Object: " << aName << endl;
        }
};

int main()
{

    Book obj("Harry");
    obj.title = "Harry Potter";
    obj.author = "J K Rowling";
    obj.pages = 500;

    Book obj2("J K");
    obj2.title = "Lord of Rings";
    obj2.author = "Tolkein";
    obj2.pages = 700;

    cout << obj.author << endl;
    cout << obj2.author << endl;

    return 0;
}
