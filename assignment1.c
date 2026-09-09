/*
 * Program Name: EECS 348 Assignment 1
 *
 * Description:
 * This C program uses a fixed secret number between 1 and 10.
 * The user gets up to three attempts to guess the number.
 *
 * Input:
 * The user's guesses entered through the keyboard.
 *
 * Output:
 * Messages indicating whether the guess is too high, too low,
 * correct, or whether the user lost.
 *
 * Collaborators:
 * None
 *
 * Other Sources:
 * Copilot and Gemmini
 *
 * Author:
 * Xavier Eddins
 *
 * Creation Date:
 * September 8, 2026
 *
 * Revision Date:
 * September 8, 2026
 *
 * Revisions:
 * Improved comments, input handling, and program organization.
 */

 #include <stdio.h>

#include <stdio.h>

int main() { //Main function to execute the guessing game
    // Store the fixed secret number
    int secretNumber = 7; //the secret number is set to 7

    // Variable to hold the user's guess
    int guess; // the guess variable will store the user's input

    // Variable to track whether the user has won
    int guessedCorrectly = 0; // Initialize to 0 (false) to show that the user has not guessed correctly yet

  
    for (int attempt = 1; attempt <= 3; attempt++) { // the loop will run 3 times, allowing 3 guesses

       
        printf("Attempt %d of 3 - Enter a number between 1 and 10: ", attempt);// prompts the user to enter a guess

        // Validate that the input is an integer
        if (scanf("%d", &guess) != 1) { // Check if the input is not a number
            printf("Invalid input. Please enter a whole number.\n"); // print an error message if the input is not a number
            return 1;  // End program if input is not a number
        }

        // Validate that the number is within the allowed range
        if (guess < 1 || guess > 10) {
            printf("Please enter a number between 1 and 10.\n");//print an error message if the input is not within the range of 1 to 10
            continue;  // Skip the rest of this iteration
        }

        // Check if the guess is correct
        if (guess == secretNumber) {// Check if the user's guess matches the secret number
            printf("Correct! You guessed the secret number.\n");//print a message indicating that the user has guessed the secret number correctly

            // Mark the game as won
            guessedCorrectly = 1;// Set guessedCorrectly to 1 (true) to indicate that the user has won

      
            break;// Exit the loop since the user has guessed correctly
        }

        // Check if the guess is too low
        else if (guess < secretNumber) {// Check if the user's guess is less than the secret number
            printf("Too low! Try again.\n");//print a message that the user's guess is too low
        }

        // Otherwise the guess must be too high
        else {
            printf("Too high! Try again.\n");//print a message that the user's guess is too high
        }
    }

    // Display the final result
    if (guessedCorrectly) {// Check if the user guessed correctly
        printf("You win!\n");//print a message that the user has won
    } else {// If the user did not guess correctly after 3 attempts
        printf("You lose! The secret number was %d.\n", secretNumber);//print a message that the user has lost and reveal the secret number
    }

    // Indicate successful program completion
    return 0;
}
