#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH = 100

bool isValidChar(char c, char validChars[]) {
  bool found = false;
  while (*validChars) {
    if (*validChars == c) {
      found = true;
    }
  }
  return found;
}

// general method for checking whether a given string is valid in a set of strings
bool isValidString(char* str, char* validStrings[]) {
  bool found = false;
  for (int i = 0; i < sizeof(validStrings) / sizeof(validStrings[0]); i++) {
    if (strcmp(str, validStrings[i]) == 0) {
      found = true;
    }
  }
  return found;
}

// check if the character is a delimiter
bool isDelimiter(char c) {
  char delims[] = {' ', ',', '/', '(', ')', '{', '}', '[', ']'};

  return isValidChar(c, delims);
}

// check if the character is a basic mathematical operator
bool isOperator(char c) {
  char ops[] = {'+', '-', '*', '/', '<', '>', '='};

  return isValidChar(c, ops);
}

// check if a variable name is valid
bool isValidIdentifier(char* str) {
  char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  return (!isValidChar(str[0], nums) && !isDelimiter(str[0]));
}

bool isKeyword(char* str) {
  const char* keywords[] = { "auto", "break", "case", "char",
            "const",    "continue", "default",  "do",
            "double",   "else",     "enum",     "extern",
            "float",    "for",      "goto",     "if",
            "int",      "long",     "register", "return",
            "short",    "signed",   "sizeof",   "static",
            "struct",   "switch",   "typedef",  "union",
            "unsigned", "void",     "volatile", "while" };
  return isValidString(str, keywords);
}

int main(int argc, char *argv[])
{
  return EXIT_SUCCESS;
}
