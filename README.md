# Number Guessing Game

This is a simple number guessing game written in C++. The program generates a random number between a specified range and gives the user 10 attempts to guess it. After each guess, the program provides feedback indicating whether the correct number is higher or lower than the guessed number.

## Features

- Generates a random number between 0 and 100.
- Allows the user up to 10 attempts to guess the correct number.
- Provides hints if the guessed number is higher or lower than the correct number.
- Displays a win message if the user guesses correctly within the allowed attempts.
- Displays the correct number and a lose message if the user fails to guess the number within the allowed attempts.

## Getting Started

### Prerequisites

- A C++ compiler (e.g., g++, clang)
- A terminal or command prompt to run the compiled program

### Running the Game

1. Clone this repository:

    ```sh
    git clone https://github.com/Shishir120/Cpp-project1.git
    cd number-guessing-game
    ```

2. Compile and run the program:


## Code Overview

- `generate_random_number(int min_int, int max_int)`: Generates a random number between `min_int` and `max_int` inclusive.

- `check_if_equal(int correct_number, int guess)`: Compares the guessed number with the correct number and provides feedback.

- `guess_the_number()`: Prompts the user to enter their guess and returns the guessed number.

- `main()`: The main function that orchestrates the game flow.

### Example Output

- You have 10 attempts to guess the number between 0 and 100
- Enter your guess: 50
- The correct number is bigger than 50
- Enter your guess: 75
- The correct number is smaller than 75
- Enter your guess: 60
- The correct number is bigger than 60