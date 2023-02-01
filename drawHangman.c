#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "drawHangman.h"
#include "colors.h"

/**************************************************
 To draw Hangman for each level and after each guess
****************************************************/
void drawHangman (int moves, int check, int level, char *word_A, char *word_B, char *word_C)
{
  /**************
   For level 1
  **************/

  if (level == 1)
  {
    system("CLS");

    cyan();
    printf("\t    H A N G M A N  ");
    reset();
    printf("\n\t    --------------");
    printf("\n\n    Complete the word to save the man! ");
    printf("\n\n   ( 6 Guesses are added to your remaining guesses for each level ) ");

    purple();
    printf("\n\n\t ================");
    printf("\n\t ||   LEVEL 1  ||");
    printf("\n\t ================");

    green();
    printf("\n\n\n Guesses Left = %d  ", moves);
    reset();

    printf("\n\n||----------");
    printf("\n||\t   |");
    printf("\n||\t___|___");

    if (moves > 0)
    {
      printf("\n||\t| . . |");
    }

    else
    {
      red();
      printf("\n||\t| x x |");
      reset();
    }

    if (moves < 5)
    {
      printf("\n  \t-------");

      if (moves == 0)
      {
        red();
        printf("\n  \t < | > ");
        reset();
      }

      else
      {
        printf("\n  \t < | > ");
      }
    }

    if (moves < 4)
    {
      printf("\n\t$--");
      printf("|");
    }

    if (moves < 3)
    {
      printf("--$");
    }

    if (moves < 2)
    {
      printf("\n  \t   |   ");
    }

    if (moves < 1)
    {
      printf("\n  \t  # # ");
    }

    cyan();
    printf("\n\n\t Word:");
    printf("  %c  %c  %c  %c  %c  %c", word_A[1], word_A[2], word_A[3], word_A[4], word_A[5], word_A[6]);
    printf("\n\t       -- -- -- -- -- --  ");
    reset();
  }

  /**************
   For level 2
  **************/
  else if (level == 2)
  {
    system("CLS");

    cyan();
    printf("\t    H A N G M A N  ");
    reset();
    printf("\n\t    --------------");
    printf("\n\n    Complete the word to save the man! ");
    printf("\n\n    (6 Guesses are added to your remaining guesses for each level) ");

    purple();
    printf("\n\n\t ================");
    printf("\n\t ||   LEVEL 2  ||");
    printf("\n\t ================");

    green();
    printf("\n\n\n Guesses left : %d  ", moves);
    reset();

    printf("\n\n||----------");
    printf("\n||\t   |");
    printf("\n||\t___|___");

    if (moves > 0)
    {
      printf("\n||\t| . . |");
    }
    else
    {
      red();
      printf("\n||\t| x x |");
      reset();
    }

    if (moves < 7)
    {
      printf("\n  \t-------");
    }

    if (moves < 6)
    {
      printf("\n  \t   |  ");
    }

    if (moves < 5)
    {
      printf("\n\t$--");
    }

    if (moves < 4)
    {
      printf("|");
    }

    if (moves < 3)
    {
      printf("--$");
    }

    if (moves < 2)
    {
      printf("\n  \t   |   ");
    }

    if (moves < 1)
    {
      printf("\n  \t  # # ");
    }

    cyan();
    printf("\n\n\t Word:");
    printf("  %c  %c  %c  %c  %c  %c  %c  %c  %c ", word_B[1], word_B[2], word_B[3], word_B[4], word_B[5], word_B[6], word_B[7], word_B[8], word_B[9]);
    printf("\n\t       -- -- -- -- -- -- -- -- --    ");
    reset();
  }

  /**************
   For level 3
  **************/
  else if (level == 3)
  {
    system("CLS");

    cyan();
    printf("\t    H A N G M A N  ");
    reset();
    printf("\n\t    --------------");
    printf("\n\n    Complete the word to save the man! ");
    printf("\n\n    (6 Guesses are added to your remaining guesses for each level)");

    purple();
    printf("\n\n\t ================");
    printf("\n\t ||   LEVEL 3  ||");
    printf("\n\t ================");

    green();
    printf("\n\n\n Guesses left : %d  ", moves);
    reset();

    printf("\n\n||----------");
    printf("\n||\t   |");
    printf("\n||\t___|___");

    if (moves > 0)
    {
      printf("\n||\t| . . |");
    }
    else
    {
      red();
      printf("\n||\t| x x |");
      reset();
    }

    if (moves < 7)
    {
      printf("\n  \t-------");
    }

    if (moves < 6)
    {
      printf("\n  \t   |  ");
    }

    if (moves < 5)
    {
      printf("\n\t$--");
    }

    if (moves < 4)
    {
      printf("|");
    }

    if (moves < 3)
    {
      printf("--$");
    }

    if (moves < 2)
    {
      printf("\n  \t   |   ");
    }

    if (moves < 1)
    {
      printf("\n  \t  # # ");
    }

    cyan();
    printf("\n\n\t Word:");
    printf("  %c  %c  %c  %c  %c  %c  %c  %c  %c ", word_C[1], word_C[2], word_C[3], word_C[4], word_C[5], word_C[6], word_C[7], word_C[8], word_C[9]);
    printf("\n\t       -- -- -- -- -- -- -- -- --    ");
    reset();
  }
}
