
// ************** PSEUDOCODE to develop a game called 'Battleship'. ************** //

//                                  PACE 2 GROUP
// Grahm Rusnak + Angel Mercado + Anthony Akintunde + Kobe Bills + Coleen Mercado

// ******************************************************************************* //

// DECLARE VARIABLES
const int columnSize = 10;      // Array Column Size
const int rowSize = 10;         // Array Row Size
const char ocean = '~';
const char ship = '#';
const char HIT = 'H';
const char MISS = '.';

// MAIN LOGIC
int main(){
// Loop through the game until user quits

    // GenerateBoard function - Call the function that generates a Battleship Board
        // loop through to add ocean and ships (do-while)
        // generate ocean 10-by-10 (for-loop)
            // loop through columns and store random numbers in Board
        // generate random ships (at least 5)
            // if-else statements

    // CleanBoard Function - Call the function that displays a Battleship Board
        //Loops through all the columns and stores a random number into Board

    // Prompt user to make a choice
        // if 1, user will play a new game
            // prompt user to enter coordinates
            // announce on game board if a ship has been hit/missed (CoordinatePicker)
        // if 2, continue an unfinished game
        // if 3, user quits game
        // if 4, user deletes all data and computer generates new game(?)
}

// ******************************************************************************* //



// FUNCTIONS :

// Create A random board with ocean and ships
//Pre: ocean and ship are declared
//Post: ocean and ships are randomly generated
void GenerateBoard(char Board[rowSize][columnSize]);
// loop through to add ocean and ships (do-while)
    // generate ocean 10-by-10 (for-loop)
        // loop through columns and store random numbers in Board
    // generate random ships (at least 5)
        // if-else statements


// Print out the board
// Pre: Must be numbers in the array to be printed
// Post:Print out the numbers in an array using a For loop
void DisplayBoard(char Board[rowSize][columnSize]);
// Loops through all the rows (for-loop)
    // Loops through all the columns and outputs Board


// Assembles generated random numbers into place
// Pre: char clean is declared
// Post: outputs all x's as untouched before game
void CleanBoard(char PlayingBoard[rowSize][columnSize]);
//Loops through all the columns and stores a random number into Board


// User picks the coordinates to guess where to hit
// Pre: xCoor, yCoor, and choice have been declared;
//      ChangeCoor allows to change coordinates if
//      user changed their mind.
// Post: With entered coordinates, user chooses between to
//       shoot or change coordinates.
void CoordinatePicker(char PlayingBoard[rowSize][columnSize], char Board[rowSize][columnSize], bool &MainMenu);
// Loop xCoor and yCoor (do-while)
    // if xCoor = 0, x-coordinate has been chosen (true); else, invalid
    // if yCoor = 0, y-coordinate has been chosen (true); else, invalid
    // coordinates have been chosen, prompt user to 1-shoot or 2-change
        // if choice = 1, determine if HIT or MISS


// A menu that allows the user to choose in the game
// Pre: variable choice has been declared
// Post: number has been chosen to begin/continue/quit game
void Menu(int &choice);
// Loop through choices (while-loop)


void DebugMenu(int &choice);


void intermission();
