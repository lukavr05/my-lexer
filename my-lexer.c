#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH = 100

bool isValidChar(char c, char *validChars) {
  while (*validChars) {
    if (*validChars == c) {
      return true;
    }
  }
  return false;
}

bool isDelimiter(char c) {
  char *delims[] = {' ', ',', '/', '(', ')', '{', '}', '[', ']'};

  return isValidChar(c, *delims);
}

int main(int argc, char *argv[])
{
  return EXIT_SUCCESS;
}
