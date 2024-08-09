#include <iostream>
#include <cstdlib>
#include <ctime>

void playGame(int maxGuesses);

int main() {
    const int maxGuesses = 5;
    char playAgain;

    do {
        playGame(maxGuesses);
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    std::cout << "Thanks for playing!" << std::endl;
    return 0;
}

void playGame(int maxGuesses) {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed the random number generator
    int randomNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;

    std::cout << "I have selected a number between 1 and 100. You have " << maxGuesses << " attempts to guess it." << std::endl;

    while (attempts < maxGuesses) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < 1 || guess > 100) {
            std::cout << "Please enter a number between 1 and 100." << std::endl;
            continue;
        }

        attempts++;

        if (guess == randomNumber) {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
            return;
        } else if (guess < randomNumber) {
            std::cout << "Too low!" << std::endl;
        } else {
            std::cout << "Too high!" << std::endl;
        }

        std::cout << "You have " << (maxGuesses - attempts) << " attempts left." << std::endl;
    }

    std::cout << "Sorry, you've used all your attempts. The correct number was " << randomNumber << "." << std::endl;
}
