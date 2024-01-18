#include "game.h"

Game::Game(int userMax)
{
    srand(time(0));
    maxNumber = userMax;
    cout << "GAME CONSTRUCTOR: object initialized with " << userMax << " as a maximum value" << endl;

}
void Game::play(){
    numOfGuesses = 0;
    randomNumber = rand() % maxNumber +1;
    do {

        cout << "Give your guess between 1 - 10" << endl;
        cin >> playerGuess;
        ++numOfGuesses;

            if (playerGuess == randomNumber){
            cout << "Your guess is right = " << playerGuess  << endl;
                printGameResult();
        }
        else if (playerGuess > randomNumber){
            cout << "Your guess is too high" << endl;

        }
        else if (playerGuess < randomNumber){
            cout << "Your guess is too low" << endl;
        }

    }while (playerGuess != randomNumber);

}

void Game::printGameResult(){
  cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}

Game::~Game(){
  cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}
