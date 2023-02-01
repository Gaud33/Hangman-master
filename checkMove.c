/**************************************************
Returns 1 if game still continues
Returns 0 if player has completed the level
*************************************************/
#include <stdio.h>
#include "checkMove.h"

int checkMove(int *level, char *word_A, char * word_B, char *word_C)
{
  int returnValue;

  // For level 1
  if (*level == 1)
  {
    if (word_A[1] == 'R' && word_A[2] == 'A' && word_A[3] == 'N' && word_A[4] == 'D' && word_A[5] == 'O' && word_A[6] == 'M')
    {
      returnValue = 0;
    }

    else if (word_A[2] == 'A' || word_A[3] == 'N' || word_A[5] == 'O' || word_A[6] == 'M')
    {
      returnValue = 1;
    }
  }

  // For level 2
  else if (*level == 2)
  {
    if (word_B[1] == 'M' && word_B[2] == 'O' && word_B[3] == 'D' && word_B[4] == 'E' && word_B[5] == 'R' && word_B[6] == 'A' && word_B[7] == 'T' &&
        word_B[8] == 'O' && word_B[9] == 'R')
    {
      returnValue = 0;
    }

    else if (word_B[2] == 'O' || word_B[3] == 'D' || word_B[5] == 'R' || word_B[6] == 'A' || word_B[7] == 'T' || word_B[9] == 'R')
    {
      returnValue = 1;
    }
  }

  // For level 3
  else if (*level == 3)
  {
    if (word_C[1] == 'E' && word_C[2] == 'X' && word_C[3] == 'Q' && word_C[4] == 'U' && word_C[5] == 'I' && word_C[6] == 'S' && word_C[7] == 'I' &&
        word_C[8] == 'T' && word_C[9] == 'E')
    {
      returnValue = 0;
    }

    else if (word_C[1] == 'E' || word_C[3] == 'Q' || word_C[4] == 'U' || word_C[5] == 'I' || word_C[6] == 'S' || word_C[7] == 'I' || word_C[8] == 'T' ||
             word_C[9] == 'E')
    {
      returnValue = 1;
    }
  }
  return returnValue;
}
