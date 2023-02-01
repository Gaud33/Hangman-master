#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "colors.h"
#include "drawHangman.h"
#include "makeMove.h"
#include "checkMove.h"


void winScreen();

int main()
{
  // Words
  char word_A[8] = {'0', 'R', '-', '-', 'D', '-', '-'};
  char word_B[11] = {'0', 'M', '-', '-', 'E', '-', '-', '-', 'O', '-'};
  char word_C[11] = {'0', '-', 'X', '-', '-', '-', '-', '-', '-', '-'};

  int moves = 5, check, level = 1;
  char guess;
  
  nextLevel:
  check = 1;
  while (moves != 0)
  {
    // To draw the hangman
    drawHangman(moves, check, level, word_A, word_B, word_C);

    printf("\n\n Enter the guess (lowercase): ");
    scanf(" %c", &guess);

    // to set the corresponding value if the guess is correct
    makeMove(&guess, &level, &moves, word_A, word_B, word_C);
    // to check if the guess is correct
    check = checkMove(&level, word_A, word_B, word_C);


    if (check == 0)
    {
      if (level < 3)
      {
        moves = moves + 6;
      }

      if (level < 3)
      {

        drawHangman(moves, check, level, word_A, word_B, word_C); // To print the last character if guess is correct
        green();

        level++;
        printf("\n\n    Level Complete !!\n    (Press Enter to continue)");
        reset();

        getch();
        goto nextLevel;
      }

      else
      {
        break; // To terminate the program if player wins level 3
      }
    }
  }

  if (check == 0)
  {
    drawHangman(moves, check, level, word_A, word_B, word_C); // To set the last character if won
    green();
    winScreen();
    reset();
  }

  else if (check == 1)
  {
    drawHangman(moves, check, level, word_A, word_B, word_C);
    red();
    printf("\n\n\a     Oh no! The hangman died... \n\tYou  Failed !!\n\n");
    reset();
  }
  return 0;
}




void winScreen()
{
  system("CLS");
  printf("\n\n\t\t\t  YOU");
  printf("\n\n\t *       *\t*******\t\t*      *");
  printf("\n\t *       *\t   *\t\t* *    *");
  printf("\n\t *   *   *\t   *\t\t*  *   *");
  printf("\n\t *  * *  *\t   *\t\t*   *  *");
  printf("\n\t * *   * *\t   *\t\t*    * *");
  printf("\n\t *       *\t******* \t*      *");
}