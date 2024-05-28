# Tic-Tac-Toe Game

This is a simple Tic-Tac-Toe game implemented in C++. The game allows a human player to play against a computer.

## How to Play

1. The game board consists of 9 spaces, numbered 1 to 9, arranged in a 3x3 grid.
2. The player is represented by 'X' and the computer is represented by 'O'.
3. The player makes the first move by entering a number corresponding to the desired space.
4. The computer then makes a move.
5. The game alternates between player and computer moves until there is a winner or the board is full, resulting in a tie.

## Compilation and Execution

To compile and run the program, follow these steps:

1. Open a terminal or command prompt.
2. Navigate to the directory where the source code file (`tictactoe.cpp`) is located.
3. Compile the code using a C++ compiler, such as `g++`:

   ```bash
    g++ -o tictactoe tictactoe.cpp
   ```
4. Run the compiled executable:

   ```bash
   ./tictactoe 
   ```
## Code Structure

The code consists of the following functions:

- `void drawBox(char *spaces)`: Draws the game board.
- `void playermove(char *spaces, char player)`: Handles the player's move.
- `void computermove(char *spaces, char computer)`: Handles the computer's move.
- `bool winner(char *spaces, char player, char computer)`: Checks for a winner.
- `bool tie(char *spaces)`: Checks for a tie.

## Notes

- The game uses the standard C++ library and does not require any external dependencies.
- The random number generator is seeded using the current time to ensure different game outcomes.

## Future Improvements

- Enhance the computer's AI to make it more challenging.
- Add a user interface for better gameplay experience.
- Implement multiplayer support.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

This `README.md` file provides a clear overview of your Tic-Tac-Toe project, instructions on how to compile and run the code, and a brief explanation of the code structure.
