#include "Sudoku.h"

int Sudoku::hexaSudoku1(){
//this is the number of rows and columns in the grid that needs to be solved by user
const int rows = 22;
const int columns = 23;

//these are the numbers that will be used for hexadecimal base 16 sudoku instead of decimal 0 - 9 
cout << "This is Hexadecimal Sudoku! These are the numbers that you will use            " << endl;
cout << "        0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F                          " << endl;
cout << "" << endl;

    string hexaSudokuSol [rows][columns] =
    {
      //this is a solution for a 16 x 16 grid that we changed the higher numbers from 10 - A, 11 - B, 12 - C, 13 - D, 14 - E, 15 - F. We found it online
            {" ", " ", "  ", "A", "B", "C", "D", "-", "E", "F", "G", "H", "-", "I", "J", "K", "L", "-", "M", "N", "O", "P", " "},
            {" ", " ", " +", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "+"},
            {" ", "1", " |", "B", "7", "8", "5", "|", "E", "6", "0", "A", "|", "4", "D", "2", "C", "|", "1", "3", "F", "9", "|"},
            {" ", "2", " |", "A", "F", "0", "1", "|", "5", "9", "2", "8", "|", "B", "3", "E", "6", "|", "D", "C", "4", "7", "|"},
            {" ", "3", " |", "D", "4", "9", "2", "|", "C", "B", "3", "7", "|", "A", "0", "1", "F", "|", " ", "8", "E", "6", "|"},
            {" ", "4", " |", "C", "3", "E", "6", "|", "D", "4", "F", "1", "|", "5", "7", "9", "8", "|", "C", "0", "B", "A", "|"},
            {" ", " ", " |", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "|"},
            {" ", "5", " |", "7", "B", "C", "A", "|", "3", "0", "4", "2", "|", "9", "F", "D", "1", "|", "8", "E", "6", "5", "|"},
            {" ", "6", " |", "3", "5", "6", "4", "|", "F", "E", "9", "D", "|", "0", "8", "C", "7", "|", "B", "A", "1", "2", "|"},
            {" ", "7", " |", "E", "9", "1", "F", "|", "8", "A", "7", "C", "|", "2", "6", "B", "5", "|", "3", "4", "0", "D", "|"},
            {" ", "8", " |", "0", "2", "D", "8", "|", "B", "1", "6", "5", "|", "3", "A", "4", "E", "|", "C", "7", "9", "F", "|"},
            {" ", " ", " |", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "|"},
            {" ", "9", " |", "9", "6", "7", "0", "|", "4", "3", "D", "F", "|", "1", "C", "8", "B", "|", "A", "2", "5", "E", "|"},
            {" ","10", "|", "4", "C", "A", "B", "|", "6", "8", "5", "E", "|", "F", "9", "0", "2", "|", "7", "1", "D", "3", "|"},
            {" ","11", "|", "F", "8", "3", "D", "|", "2", "7", "1", "0", "|", "6", "E", "5", "A", "|", "4", "9", "C", "B", "|"},
            {" ","12", "|", "5", "1", "2", "E", "|", "A", "C", "B", "9", "|", "7", "4", "3", "D", "|", "F", "6", "8", "0", "|"},
            {" ","  ", "|", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "|"},
            {" ","13", "|", "6", "0", "B", "C", "|", "7", "D", "A", "3", "|", "E", "1", "F", "4", "|", "9", "5", "2", "8", "|"},
            {" ","14", "|", "2", "A", "5", "3", "|", "9", "F", "8", "4", "|", "C", "B", "6", "0", "|", "E", "D", "7", "1", "|"},
            {" ","15", "|", "8", "E", "F", "9", "|", "1", "5", "C", "6", "|", "D", "2", "7", "3", "|", "0", "B", "A", "4", "|"},
            {" ","16", "|", "1", "D", "4", "7", "|", "0", "2", "E", "B", "|", "8", "5", "A", "9", "|", "6", "F", "3", "C", "|"},
            {" ","  ", "+", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "+"},
    };

    string hexaSudoku [rows][columns] =
    {
      //this is a 16 x 16 that needs to be solved to match the sudoku solution. Both grids were found on the internet and hardcoded.
            {" ", " ", "  ", "A", "B", "C", "D", "-", "E", "F", "G", "H", "-", "I", "J", "K", "L", "-", "M", "N", "O", "P", " "},
            {" ", " ", " +", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "+"},
            {" ", "1", " |", " ", "7", " ", "5", "|", " ", " ", " ", " ", "|", " ", "D", " ", " ", "|", "1", " ", " ", " ", "|"},
            {" ", "2", " |", "A", "F", "0", " ", "|", " ", " ", " ", " ", "|", " ", " ", "E", " ", "|", " ", " ", "4", "7", "|"},
            {" ", "3", " |", " ", " ", " ", " ", "|", "C", "B", "3", " ", "|", "A", " ", "1", " ", "|", " ", "8", " ", " ", "|"},
            {" ", "4", " |", " ", "3", " ", " ", "|", " ", " ", " ", "1", "|", " ", " ", "9", " ", "|", "C", " ", "B", " ", "|"},
            {" ", " ", " |", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "|"},
            {" ", "5", " |", "7", "B", " ", "A", "|", " ", " ", " ", "2", "|", "9", " ", " ", " ", "|", " ", "E", " ", "5", "|"},
            {" ", "6", " |", "3", " ", "6", " ", "|", " ", " ", "9", " ", "|", " ", "8", " ", "7", "|", " ", " ", "1", "2", "|"},
            {" ", "7", " |", " ", " ", " ", "F", "|", "8", "A", " ", "C", "|", " ", "6", "B", "5", "|", " ", " ", " ", " ", "|"},
            {" ", "8", " |", " ", "2", " ", " ", "|", " ", " ", " ", "5", "|", " ", "A", "4", " ", "|", "C", " ", "9", " ", "|"},
            {" ", " ", " |", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "|"},
            {" ", "9", " |", " ", "6", " ", "0", "|", " ", "3", "D", " ", "|", "1", " ", " ", " ", "|", " ", " ", "5", " ", "|"},
            {" ","10", "|", " ", " ", " ", " ", "|", "6", "8", "5", " ", "|", "F", " ", "0", "2", "|", "7", " ", " ", " ", "|"},
            {" ","11", "|", "F", "8", " ", " ", "|", "2", " ", "1", " ", "|", " ", "E", " ", " ", "|", " ", "9", " ", "B", "|"},
            {" ","12", "|", "5", " ", "2", " ", "|", " ", " ", " ", "9", "|", "7", " ", " ", " ", "|", "F", " ", "8", "0", "|"},
            {" ","  ", "|", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "+", "-", "-", "-", "-", "|"},
            {" ","13", "|", " ", "0", " ", "C", "|", " ", "D", " ", " ", "|", "E", "1", " ", " ", "|", " ", " ", "2", " ", "|"},
            {" ","14", "|", " ", " ", " ", " ", "|", " ", "F", " ", "4", "|", " ", "B", "6", "0", "|", " ", " ", " ", " ", "|"},
            {" ","15", "|", "8", "E", " ", " ", "|", " ", "5", " ", " ", "|", " ", " ", " ", " ", "|", " ", "B", "A", "4", "|"},
            {" ","16", "|", "1", " ", "4", " ", "|", " ", " ", "E", " ", "|", " ", " ", " ", " ", "|", "6", " ", "3", " ", "|"},
            {" ","  ", "+", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "+"},
    };

//nested for loops to traverse through each row and column. Changed to rows = 22 and columns = 23
    for(int i=0; i < 22; i++){

        for(int j=0; j < 23; j++) {

          cout << hexaSudoku[i][j] << " ";
        }
        cout << endl;
    }

//Gives the user the ability to ask for a certain letter to find the grid column in order to solve it. Uses a while loop that runs while the puzzle is not equal
//to the solution. The letter value gets converted from a char into a int based on ascii values. 
while(hexaSudoku != hexaSudokuSol){
cout << endl;
cout << "Please Enter the Letter Position of the Grid in which you would like to fill a value: ";
char letterValue;
cin >> letterValue;

int myLetterVal = (int)letterValue;
//determines letter values from ascii table
if(myLetterVal == 65){
  myLetterVal = 3;
}
else if(myLetterVal == 66){
  myLetterVal = 4;
}
else if(myLetterVal == 67){
  myLetterVal = 5;
}
else if(myLetterVal == 68){
  myLetterVal = 6;
}
else if(myLetterVal == 69){
  myLetterVal = 8;
}
else if(myLetterVal == 70){
  myLetterVal = 9;
}
else if(myLetterVal == 71){
  myLetterVal = 10;
}
else if(myLetterVal == 72){
  myLetterVal = 11;
}
else if(myLetterVal == 73){
  myLetterVal = 13;
}
else if(myLetterVal == 74){
  myLetterVal = 14;
}
else if(myLetterVal == 75){
  myLetterVal = 15;
}
else if(myLetterVal == 76){
  myLetterVal = 16;
}
else if(myLetterVal == 77){
  myLetterVal = 18;
}
else if(myLetterVal == 78){
  myLetterVal = 19;
}
else if(myLetterVal == 79){
  myLetterVal = 20;
}
else if(myLetterVal == 80){
  myLetterVal = 21;
}
else {
  //It throws an error when the char and int are out of bounds.
  cout << "Error Invalid Letter" << endl;
}

//Gives the user the ability to ask for a certain number for a row when grid column is already specified in order to solve it. Uses a bunch of if - else statements using conditionals for the
//numbervalue that allows an user to enter a number position of the grid to fill a value.
cout << "";
cout << "Please Enter the Number Position of the Grid in which you would like to fill a value: ";
int numberValue;
cin >> numberValue;

if (numberValue >= 1 && numberValue <=4){

    numberValue = numberValue + 1;
}
else if(numberValue > 4 && numberValue <=8){
    numberValue = numberValue + 2;
}

else if(numberValue > 8 && numberValue <= 12){

  numberValue = numberValue + 3;
}

else if(numberValue > 12 && numberValue <= 16){

  numberValue = numberValue + 4;
}
else {
  cout << "Error Invalid Number" << endl;
}

//Using the letter value converted into int using ascii values and the number value from above. The player enters the sudoku number that they want to play
//in the position letter value followed by number value.
cout << "";
cout << "Please Enter the Sudoku number in the desired position: ";
string sudokuValue;
cin >> sudokuValue;

cout << "" << endl;

hexaSudoku[numberValue][myLetterVal] = sudokuValue;

//the arrays of each row and column are traversed by a nested for loop with rows going to 22 and columns going to 23. Compares each element to the solution puzzle
//if a is true which means solved puzzle matches the puzzle solution, prints out a congrats message.
bool a = true;
for(int i=0; i < 22; i++){

    for(int j=0; j < 23; j++) {

      cout << hexaSudoku[i][j] << " ";
      if(hexaSudoku[i][j] == hexaSudokuSol[i][j]){

      }

      else {
        a = false;
      }
    }
    cout << endl;
    }

    if(a){

      cout << "Congratulations, you have completed this Hexadecimal Sudoku Puzzle!" << endl;
      return 0;
    }

    else {}

    }
}


int main(){

//method calls in the main method
  Sudoku sudoku;
  sudoku.hexaSudoku1();
}