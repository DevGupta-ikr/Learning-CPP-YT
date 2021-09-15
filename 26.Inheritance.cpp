#include <iostream>

using namespace std;

class Chef{     // Super Class
    public:
        void makeChicken()
        {
            cout << "The chef makes chicken" << endl;
        }
        void makeSalad()
        {
            cout << "The chef makes salad" << endl;
        }
        void makeSpecial()
        {
            cout << "The chef makes spacial dish" << endl;
        }
};

class ItalianChef : public Chef{  // Sub Class
    public:
        void makePasta()
        {
            cout << "The chef makes Pasta" << endl;
        }
        void makeSpecial()  // Overriding
        {
            cout << "The chef makes Something" << endl;
        }

};

int main()
{
    Chef chef;
    chef.makeChicken();


    ItalianChef italianchef;
    italianchef.makeChicken();

    ItalianChef italianchef2;
    italianchef2.makePasta();

    Chef chef2;
    chef2.makeSpecial();

    ItalianChef italianchef3;
    italianchef3.makeSpecial();

    return 0;
}
