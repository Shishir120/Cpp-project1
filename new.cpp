#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Game
{

    public: 
        int generate_random_number(){
            int MIN_INT = 0;
            int MAX_INT = 100;

            srand(time(0));

            int random_number = (rand() % MAX_INT) + MIN_INT;

            return random_number;
        }

        bool check_if_equal(int& correct_number, int& guess){
            bool correct = false;

            if(guess == correct_number){
                correct = true;
            }else if(guess > correct_number){
                cout << "Correct number is smaller than " << guess << endl;
            }else if(guess < correct_number){
                cout << "Correct number is bigger than " << guess << endl;
            }

            return correct;
        }

        int guess_the_number(int& correct_number){
            int guess = 0;

            cout << endl << "Enter Your guess: ";
            cin >> guess;
            
            return guess;
        }

};


int main(){
    Game player;
    char play_again = 'y';

    while (play_again == 'y' || play_again == 'Y'){

        int random_number = player.generate_random_number();

        cout << "You have 10 attempts to guess the number" << endl;

        // cout << random_number;

        int attempts = 10;
        bool correct = false;

        while(attempts > 0 && !correct){
            int guess = player.guess_the_number(random_number);
            correct = player.check_if_equal(random_number, guess);

            attempts --;
        }

        if(!correct){
            cout << endl << "You lose!" << endl;
            cout << "The correct number is: " << random_number << endl;
        }else{
            cout << endl << "What a guess" << endl << "You win!" << endl;
        }

        cout << endl << "Press 'y' to play again: ";
        cin >> play_again;
    }
}