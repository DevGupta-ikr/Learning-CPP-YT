
#include <iostream>

using namespace std;

int main()
{
    string phrase = "Giraffe Academy";


    cout << phrase;
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("Academy", 0) << endl;
    cout << phrase.substr(2, 7) << endl;  // From 2 take 7 characters


    return 0;
}
