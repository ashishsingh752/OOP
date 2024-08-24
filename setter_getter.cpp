#include <iostream>
using namespace std;

class Movie
{
private:
  string rating;

public:
  string title;
  string director;

  Movie(string aTitle, string aDirector, string aRating)
  {
    title = aTitle;
    director = aDirector;
    setRating(aRating);
  }

  void setRating(string aRating)
  {
    if (aRating == "a" || aRating == "b" || aRating == "c")
    {
      rating = aRating;
    }
    else
    {
      rating = "invalid: enter eigther a , b or c";
    }
  }
  string getRating()
  {
    return rating;
  }
};

int main()
{

  Movie Avengers("The avangers", "joss", "tp-12");

  Avengers.setRating("badfdf");
  // cout<<Avengers.rating<<endl; // it is not correct bcs we can't access rating bcs it is private so we need getter (getRating)
  cout << Avengers.getRating() << endl; // by this method we can acess the things of the private

  return 0;
}