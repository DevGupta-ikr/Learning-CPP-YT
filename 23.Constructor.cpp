
#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book()  // Default constructor
        {
            title = "no title";
            author = "no author";
            pages = 0;
        }

        Book(string aName, string aTitle, int aPages)   // Constructor
        {
            author = aName;
            title = aTitle;
            pages = aPages;

        }
};

int main()
{

    Book obj("J K", "Harry Potter", 500);
    obj.title = " HP ";   // Update allowed
    Book obj2("Tolkein", "Lord of the Rings", 700);

    Book obj3;  // Empty

    cout << obj.title << endl;
    cout << obj2.pages << endl;
    cout << obj3.pages << endl;

    return 0;
}
