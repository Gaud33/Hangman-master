#include <stdio.h>
#include "colors.h"


void red()
{
  printf("\033[0;31m");
}

void green()
{
  printf("\033[0;32m");
}

void yellow()
{
  printf("\033[0;33m");
}

void blue()
{
  printf("\033[0;34m");
}

void purple()
{
  printf("\033[0;35m");
}

void cyan()
{
  printf("\033[0;36m");
}

// To reset to defaults
void reset()
{
  printf("\033[0m");
}