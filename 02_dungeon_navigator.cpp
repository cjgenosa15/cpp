/*
 * File: 02_dungeon_navigator.cpp
 * Project 2: Text-Based Dungeon Navigator
 * 
 * Topics Covered: 
 *   - Enums, Switch Statements
 *   - While Loop, Break / Continue
 *   - Booleans, User Input
 * 
 * Requirements:
 * 1. Define an enum for directions: NORTH = 1, SOUTH, EAST, WEST, EXIT.
 * 2. Use a while loop to keep the game running until isAlive becomes false or the player chooses EXIT.
 * 3. Prompt the player to enter a number (1-5) corresponding to the enum options. Use a switch statement to process their choice.
 * 4. Implement 'continue' to restart the turn if an invalid direction is picked (e.g., bumping into a wall or typing an invalid number).
 * 5. Implement 'break' to end the game loop immediately if the player encounters a trap or wins.
 */

#include <iostream>
using namespace std;

enum directions {
    NORTH = 1,
    SOUTH,
    EAST,
    WEST,
    EXIT
};

int main() {
    bool playerPlaying = true;
    int playerInput;
    cout << "_-_-_- Welcome to Dungeon Navigator -_-_-_\n\n";

    while(playerPlaying){
        cout << "\n\nPress 1 - 5 to operate the following:\n";
        cout << "   1 = North\n";
        cout << "   2 = South\n";
        cout << "   3 = East\n";
        cout << "   4 = West\n";
        cout << "   5 = Exit\n\n";

        cout << "Player Input: ";
        cin >> playerInput;
        cout << "\n";
        
        switch(playerInput){
            case 1:
            cout << "Player moved to North.\n";
            cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
            break;
            case 2:
            cout << "Player moved to South.\n";
            cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
            break;
            case 3:
            cout << "Player moved to East.\n";
            cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
            break;
            case 4:
            cout << "Player moved to West.\n";
            cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
            break;
            case 5:
            cout << "Player exited the game.\n";
            cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
            playerPlaying = false;
            break;
            default:
            cout << "Please Enter Number from 1 - 5 only.\n";
            cout << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-";
            continue;
        }
    }
    return 0;
}