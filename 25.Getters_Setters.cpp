

#include <iostream>

using namespace std;

class Movie {
    private:              // accessed only here
        string rating;
    public:               // accessed by all code outside
        string title;
        string director;


        Movie(string aTitle, string aDirector, string aRating)   // Constructor
        {
            title = aTitle;
            director = aDirector;
            rating = aRating;
        }

        void setRating(string aRating)
        {
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" )
                rating = aRating;
            else
            {
                rating = "NR";
            }
        }

        string getRating()
        {
            return rating;
        }

};

int main()
{

    Movie Avengers("The Avengers", "Joss Whedon", "PG-1345");

    Avengers.setRating("Dog");  //Sending invalid rating

    cout << Avengers.getRating() << endl;  // Rating cannot be modified now

    return 0;
}
