//version1
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "==============" << endl;
    cout << "MOVIE GUESSER" << endl;
    cout << "==============" << endl;
    string CorrectAns = "Inception";
    cout << "Hint 1: Genres: Dreams, Sci-Fi, Action" << endl;
    cout << "Hint 2: Year of release: 2010" << endl;
    cout << "Hint 3: Directed by Christopher Nolan" << endl;
    string Answer;
    cout << "Your Guess: ";
    cin >> Answer;
    if(Answer == CorrectAns)
    {
        cout << "Correct!";
    }
    else
    {
        cout << "Incorrect! The correct answer was Inception";
    }
}