/***********************************************
if guess is correct sets the corresponding value
if guess is wrong notifies the user
************************************************/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "colors.h"
#include "makeMove.h"

void makeMove (char *guess, int *level, int *moves, char *word_A, char *word_B, char *word_C)
{
  // For level 1

  if (*level == 1)
  {
    if (*guess == 'a' && word_A[2] == '-')
    {
      word_A[2] = 'A';
    }

    else if (*guess == 'n' && word_A[3] == '-')
    {
      word_A[3] = 'N';
    }

    else if (*guess == 'o' && word_A[5] == '-')
    {
      word_A[5] = 'O';
    }

    else if (*guess == 'm' && word_A[6] == '-')
    {
      word_A[6] = 'M';
    }

    else
    {
      (*moves)--; // Moves are decreased if guess is wrong
      red();
      printf("\n Wrong guess \n (Press Enter to continue) \n");
      getch();
      reset();
    }
  }

  // For level 2

  if (*level == 2)
  {
    if (*guess == 'o' && word_B[2] == '-')
    {
      word_B[2] = 'O';
    }

    else if (*guess == 'd' && word_B[3] == '-')
    {
      word_B[3] = 'D';
    }

    else if (*guess == 'r')
    {
      if (word_B[5] == '-')
      {
        word_B[5] = 'R';
      }
      else if (word_B[9] == '-')
      {
        word_B[9] = 'R';
      }
    }

    else if (*guess == 'a' && word_B[6] == '-')
    {
      word_B[6] = 'A';
    }

    else if (*guess == 't' && word_B[7] == '-')
    {
      word_B[7] = 'T';
    }

    else
    {
      (*moves)--; // Moves are decreased if guess is wrong
      red();
      printf("\n Wrong guess \n (Press Enter to continue) \n");

      getch();
      reset();
    }
  }

  // For level 3

  if (*level == 3)
  {
    if (*guess == 'e')
    {
      if (word_C[1] == '-')
      {
        word_C[1] = 'E';
      }

      else if (word_C[9] == '-')
      {
        word_C[9] = 'E';
      }
    }

    else if (*guess == 'q' && word_C[3] == '-')
    {
      word_C[3] = 'Q';
    }

    else if (*guess == 'u' && word_C[4] == '-')
    {
      word_C[4] = 'U';
    }

    else if (*guess == 'i' && word_C[5] == '-')
    {
      word_C[5] = 'I';
    }

    else if (*guess == 's' && word_C[6] == '-')
    {
      word_C[6] = 'S';
    }

    else if (*guess == 'i' && word_C[7] == '-')
    {
      word_C[7] = 'I';
    }

    else if (*guess == 't' && word_C[8] == '-')
    {
      word_C[8] = 'T';
    }

    else
    {
      (*moves)--; // Moves are decreased if guess is wrong
      red();
      printf("\n Wrong guess \n(Press Enter to continue) \n");

      getch();
      reset();
    }
  }
}

