//version3
#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "==============" << endl;
    cout << "MOVIE GUESSER" << endl;
    cout << "==============" << endl;
    string arr[3] = {"Inception", "The Dark Knight", "Interstellar"};
    string hints[3][3] = {
        {"Hint 1: Dreams, Sci-Fi, Action", "Hint 2: 2010", "Hint 3: Christopher Nolan"},
        {"Hint 1: Superhero, Crime, Action", "Hint 2: 2008", "Hint 3: Christopher Nolan"},
        {"Hint 1: Time, Space, Sci-fi", "Hint 2: 2014", "Hint 3: Christopher Nolan"}
    };
    string Answer1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << hints[i][j] << endl;
            cout << "Guess now?(Y/N): ";
            cin >> Answer1;
            if (Answer1 == "Y")
            {
                break;
            }
        }
        string Answer;
        cout << "Your Guess: ";
        cin >> Answer;

        if(Answer == arr[i])
        {
            cout << "Correct!" << endl;
        }
        else
        {
            cout << "Incorrect. The correct Answer was " << arr[i] << endl;
        }
    }
}