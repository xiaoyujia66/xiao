#include <iostream>
#include <cstdlib>
#include <ctime>

int guessGame( int );
int checkCount( int );

using namespace std;

int main()
{
    srand( time( 0 ) );

    int guessnumber;

    cout << "I have a number between 1 and 1000.\n"
        << "Can you guess my number?\n"
        << "Please type your first guess." << endl;

    cout << "Enter your guessnumber: ";
    cin >> guessnumber;
}
int guessgame( int guessnumber )
{
    int answer;
    char response;

    answer = 1 + rand() % 1000;

    while( response == 'y' )
    {
        while( guessnumber = answer )
        {
            cout << "Excellent! You guessed the number!\n"
                << "Would you like to play again (y or n)?";
            cin >> response;
        }
    }
    if( guessnumber < answer )
        cout << "Too low. Try again.";
    else
        if( guessnumber > answer )
            cout << "Too high. Try again.";
}
int checkCount( int count )
{
    if( count < 10 )
        cout << "Either you know the secret or you got lucky!\n";
    else
        if( count == 10 )
            cout << "Ahah! You know the secret!\n";
    else
        cout << "You should be able to do better!\n";
}
